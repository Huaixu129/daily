#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 定义比较函数，用于排序
int compare(const void *a, const void *b) {
    return *(char *)a - *(char *)b;    
}

int main() {
    char input[101]; // 假设字符串长度不超过100
    while (1) {
        scanf("%s", input);
        if (input[0] == 'E') {
            break;
        }

        // 使用标准库函数qsort对字符串进行排序
        qsort(input, strlen(input), sizeof(char), compare);

        printf("%s\n", input);
    }
    return 0;
}
