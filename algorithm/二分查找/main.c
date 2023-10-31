#include <stdio.h>

/* 二分查找函数 */
int binarySearch(int array[], int left, int right, int target) {
    if (right >= left) {
        int middle = (right + left) / 2;

        // 如果元素在中间位置
        if (array[middle] == target)
            return middle;

        // 如果元素小于中间位置的元素，只需要在左边的子数组中查找
        if (array[middle] > target)
            return binarySearch(array, left, middle - 1, target);

        // 否则元素只能在右边的子数组中
        return binarySearch(array, middle + 1, right, target);
    }

    // 如果元素不在数组中
    return -1;
}

int main(void) {
    int array[] = {2, 3, 4, 10, 40};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 10;
    int result = binarySearch(array, 0, size - 1, target);
    (result == -1) ? printf("元素不在数组中\n")
                   : printf("元素在数组的索引 %d\n", result);
    return 0;
}
