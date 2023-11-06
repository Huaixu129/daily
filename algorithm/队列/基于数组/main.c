/* ���ڻ�������ʵ�ֵĶ��� */
typedef struct {
    int *nums;       // ���ڴ洢����Ԫ�ص�����
    int front;       // ����ָ�룬ָ�����Ԫ��
    int queSize;     // βָ�룬ָ���β + 1
    int queCapacity; // ��������
} ArrayQueue;

/* ���캯�� */
ArrayQueue *newArrayQueue(int capacity) {
    ArrayQueue *queue = (ArrayQueue *)malloc(sizeof(ArrayQueue));
    // ��ʼ������
    queue->queCapacity = capacity;
    queue->nums = (int *)malloc(sizeof(int) * queue->queCapacity);
    queue->front = queue->queSize = 0;
    return queue;
}

/* �������� */
void delArrayQueue(ArrayQueue *queue) {
    free(queue->nums);
    free(queue);
}

/* ��ȡ���е����� */
int capacity(ArrayQueue *queue) {
    return queue->queCapacity;
}

/* ��ȡ���еĳ��� */
int size(ArrayQueue *queue) {
    return queue->queSize;
}

/* �ж϶����Ƿ�Ϊ�� */
_Bool empty(ArrayQueue *queue) {
    return queue->queSize == 0;
}

/* ���ʶ���Ԫ�� */
int peek(ArrayQueue *queue) {
    assert(size(queue) != 0);
    return queue->nums[queue->front];
}

/* ��� */
void push(ArrayQueue *queue, int num) {
    if (size(queue) == capacity(queue)) {
        printf("��������\r\n");
        return;
    }
    // �����βָ�룬ָ���β���� + 1
    // ͨ��ȡ�������ʵ�� rear Խ������β����ص�ͷ��
    int rear = (queue->front + queue->queSize) % queue->queCapacity;
    // �� num �������β
    queue->nums[rear] = num;
    queue->queSize++;
}

/* ���� */
void pop(ArrayQueue *queue) {
    int num = peek(queue);
    // ����ָ������ƶ�һλ����Խ��β���򷵻ص�����ͷ��
    queue->front = (queue->front + 1) % queue->queCapacity;
    queue->queSize--;
}

/* ��ӡ���� */
void printArrayQueue(ArrayQueue *queue) {
    int arr[queue->queSize];
    // ����
    for (int i = 0, j = queue->front; i < queue->queSize; i++, j++) {
        arr[i] = queue->nums[j % queue->queCapacity];
    }
    printArray(arr, queue->queSize);
}
