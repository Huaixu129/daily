#include <stdio.h>

/* ���ֲ��Һ��� */
int binarySearch(int array[], int left, int right, int target) {
    if (right >= left) {
        int middle = (right + left) / 2;

        // ���Ԫ�����м�λ��
        if (array[middle] == target)
            return middle;

        // ���Ԫ��С���м�λ�õ�Ԫ�أ�ֻ��Ҫ����ߵ��������в���
        if (array[middle] > target)
            return binarySearch(array, left, middle - 1, target);

        // ����Ԫ��ֻ�����ұߵ���������
        return binarySearch(array, middle + 1, right, target);
    }

    // ���Ԫ�ز���������
    return -1;
}

int main(void) {
    int array[] = {2, 3, 4, 10, 40};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 10;
    int result = binarySearch(array, 0, size - 1, target);
    (result == -1) ? printf("Ԫ�ز���������\n")
                   : printf("Ԫ������������� %d\n", result);
    return 0;
}
