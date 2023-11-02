#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义一个函数，将科学计数法的字符串转换为十进制数并打印
void convertScientificNotation(char* s) {
    int i = 0;
    // 如果字符串以负号开头，打印负号并跳过
    if (s[i] == '-') {
        printf("-");
        i++;
    }
    // 找到'E'的位置
    while (s[i] != 'E') {
        i++;
    }
    // 将'E'后面的字符串转换为整数，得到指数
    int exp = atoi(&s[i + 1]);
    // 如果指数为负
    if (exp < 0) {
        printf("0.");
        // 打印足够多的零
        for (int j = 0; j < abs(exp) - 1; j++) {
            printf("0");
        }
        // 打印基数的整数部分和小数部分
        printf("%c", s[1]);
        for (int j = 3; s[j] != 'E'; j++) {
            printf("%c", s[j]);
        }
    } else { // 如果指数为正
        printf("%c", s[1]);
        // 如果指数大于等于小数部分的长度
        if (exp >= strlen(&s[3])) {
            // 打印小数部分，并在末尾添加足够多的零
            for (int j = 3; s[j] != 'E'; j++) {
                printf("%c", s[j]);
            }
            for (int j = 0; j < exp - strlen(&s[3]) + 1; j++) {
                printf("0");
            }
        } else { // 如果指数小于小数部分的长度
            // 打印小数部分的前exp位，并在其后添加一个小数点
            for (int j = 0; j <= exp; j++) {
                printf("%c", s[j + 3]);
            }
            printf(".");
            // 打印小数部分的剩余位
            for (int j = exp + 3; s[j] != 'E'; j++) {
                printf("%c", s[j]);
            }
        }
    }
    printf("\n%d",strlen(&s[3]));
}

int main() {
    char s[10000];
    scanf("%s", s);
    convertScientificNotation(s);
    return 0;
}
