#include <stdio.h>
#include <stdbool.h>
void printUniqueElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true; // ���赱ǰԪ����Ψһ��

        // ��鵱ǰԪ���Ƿ�������Ԫ���ظ�
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false; // ��ǰԪ�ز���Ψһ��
                break;
            }
        }

        // �����ǰԪ����Ψһ�ģ������
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, 1, 2, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("�����е�ΨһԪ��: ");
    printUniqueElements(arr, size);

    return 0;
}
