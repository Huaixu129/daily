#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ����ȽϺ�������������
int compare(const void *a, const void *b) {
    return *(char *)a - *(char *)b;    
}

int main() {
    char input[101]; // �����ַ������Ȳ�����100
    while (1) {
        scanf("%s", input);
        if (input[0] == 'E') {
            break;
        }

        // ʹ�ñ�׼�⺯��qsort���ַ�����������
        qsort(input, strlen(input), sizeof(char), compare);

        printf("%s\n", input);
    }
    return 0;
}
