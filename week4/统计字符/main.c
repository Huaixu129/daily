#include <stdio.h>

void countCharacters(const char *str) {
    int charCount[256] = {0}; // 假定字符编码在0-255之间

    // 遍历字符串，统计字符数量
    while (*str) {
        charCount[(unsigned char)*str]++;
        str++;
    }

    // 打印字符及其数量
    for (int i = 0; i < 256; i++) {
        if (charCount[i] > 0) {
            printf("字符 '%c' 出现了 %d 次\n", (char)i, charCount[i]);
        }
    }
}

int main() {
    const char *str = "Hello, World!";
    countCharacters(str);
    return 0;
}
