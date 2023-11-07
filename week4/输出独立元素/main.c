#include <stdio.h>
#include <stdbool.h>
void printUniqueElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true; // 假设当前元素是唯一的

        // 检查当前元素是否与后面的元素重复
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false; // 当前元素不是唯一的
                break;
            }
        }

        // 如果当前元素是唯一的，输出它
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, 1, 2, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("数组中的唯一元素: ");
    printUniqueElements(arr, size);

    return 0;
}
