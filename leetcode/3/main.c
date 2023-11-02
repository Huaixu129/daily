#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ����һ������������ѧ���������ַ���ת��Ϊʮ����������ӡ
void convertScientificNotation(char* s) {
    int i = 0;
    // ����ַ����Ը��ſ�ͷ����ӡ���Ų�����
    if (s[i] == '-') {
        printf("-");
        i++;
    }
    // �ҵ�'E'��λ��
    while (s[i] != 'E') {
        i++;
    }
    // ��'E'������ַ���ת��Ϊ�������õ�ָ��
    int exp = atoi(&s[i + 1]);
    // ���ָ��Ϊ��
    if (exp < 0) {
        printf("0.");
        // ��ӡ�㹻�����
        for (int j = 0; j < abs(exp) - 1; j++) {
            printf("0");
        }
        // ��ӡ�������������ֺ�С������
        printf("%c", s[1]);
        for (int j = 3; s[j] != 'E'; j++) {
            printf("%c", s[j]);
        }
    } else { // ���ָ��Ϊ��
        printf("%c", s[1]);
        // ���ָ�����ڵ���С�����ֵĳ���
        if (exp >= strlen(&s[3])) {
            // ��ӡС�����֣�����ĩβ����㹻�����
            for (int j = 3; s[j] != 'E'; j++) {
                printf("%c", s[j]);
            }
            for (int j = 0; j < exp - strlen(&s[3]) + 1; j++) {
                printf("0");
            }
        } else { // ���ָ��С��С�����ֵĳ���
            // ��ӡС�����ֵ�ǰexpλ������������һ��С����
            for (int j = 0; j <= exp; j++) {
                printf("%c", s[j + 3]);
            }
            printf(".");
            // ��ӡС�����ֵ�ʣ��λ
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
