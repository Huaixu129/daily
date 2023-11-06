#include <stdio.h>

void countCharacters(const char *str) {
    int charCount[256] = {0}; // �ٶ��ַ�������0-255֮��

    // �����ַ�����ͳ���ַ�����
    while (*str) {
        charCount[(unsigned char)*str]++;
        str++;
    }

    // ��ӡ�ַ���������
    for (int i = 0; i < 256; i++) {
        if (charCount[i] > 0) {
            printf("�ַ� '%c' ������ %d ��\n", (char)i, charCount[i]);
        }
    }
}

int main() {
    const char *str = "Hello, World!";
    countCharacters(str);
    return 0;
}
