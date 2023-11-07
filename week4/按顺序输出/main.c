#include <stdio.h>
#include <string.h>

int main() {
    char input[101];
    while (scanf("%s", input) != EOF) {
        int len = strlen(input);
        int z_count = 0, o_count = 0, j_count = 0;

        // 统计字符数量
        for (int i = 0; i < len; i++) {
            if (input[i] == 'Z') {
                z_count++;
            } else if (input[i] == 'O') {
                o_count++;
            } else if (input[i] == 'J') {
                j_count++;
            }
        }

        // 输出按照ZOJ的顺序
        while (z_count > 0 || o_count > 0 || j_count > 0) {
            if (z_count > 0) {
                printf("Z");
                z_count--;
            }
            if (o_count > 0) {
                printf("O");
                o_count--;
            }
            if (j_count > 0) {
                printf("J");
                j_count--;
            }
        }

        printf("\n");
    }

    return 0;
}
