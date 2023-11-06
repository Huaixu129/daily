#include <stdio.h>
typedef struct ListNode{
    int val;               // �ڵ����Ż��ߴ��������
    struct ListNode *next; // ָ����һ�ڵ��ָ��
} ListNode; // ������һ����ΪListNode�Ľṹ�壬���ڱ�ʾ�����еĽڵ�

/* ��������ʵ�ֵĶ��� */
typedef struct {
    ListNode *front, *rear;
    int queSize;
} LinkedListQueue;

/* ���캯�� */
LinkedListQueue *newLinkedListQueue() {
    LinkedListQueue *queue = (LinkedListQueue *)malloc(sizeof(LinkedListQueue));
    queue->front = NULL;
    queue->rear = NULL;
    queue->queSize = 0;
    return queue;
}

/* �������� */
void delLinkedListQueue(LinkedListQueue *queue) {
    // �ͷ����нڵ�
    for (int i = 0; i < queue->queSize && queue->front != NULL; i++) {
        ListNode *tmp = queue->front;
        queue->front = queue->front->next;
        free(tmp);
    }
    // �ͷ� queue �ṹ��
    free(queue);
}

/* ��ȡ���еĳ��� */
int size(LinkedListQueue *queue) {
    return queue->queSize;
}

/* �ж϶����Ƿ�Ϊ�� */
_Bool empty(LinkedListQueue *queue) {
    return (size(queue) == 0);
}

/* ��� */
void push(LinkedListQueue *queue, int num) {
    // β�ڵ㴦��� node
    ListNode *node = newListNode(num);
    // �������Ϊ�գ�����ͷ��β�ڵ㶼ָ��ýڵ�
    if (queue->front == NULL) {
        queue->front = node;
        queue->rear = node;
    }
    // ������в�Ϊ�գ��򽫸ýڵ���ӵ�β�ڵ��
    else {
        queue->rear->next = node;
        queue->rear = node;
    }
    queue->queSize++;
}

/* ���ʶ���Ԫ�� */
int peek(LinkedListQueue *queue) {
    assert(size(queue) && queue->front);
    return queue->front->val;
}

/* ���� */
void pop(LinkedListQueue *queue) {
    int num = peek(queue);
    ListNode *tmp = queue->front;
    queue->front = queue->front->next;
    free(tmp);
    queue->queSize--;
}

/* ��ӡ���� */
void printLinkedListQueue(LinkedListQueue *queue) {
    int arr[queue->queSize];
    // ���������е����ݵ�����
    int i;
    ListNode *node;
    for (i = 0, node = queue->front; i < queue->queSize; i++) {
        arr[i] = node->val;
        node = node->next;
    }
    printArray(arr, queue->queSize);
}
