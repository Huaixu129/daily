#include <stdio.h>

#include <stdio.h>

// ����������ת��Ϊ�����Ʊ�ʾ
void intToBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }
    
    int binary[32]; // ����ʹ��32λ����ʾ��������
    int index = 0;
    
    while (num > 0) {
        binary[index] = num % 2;
        num = num / 2;
        index++;
    }
    
    // �Ӻ���ǰ���������λ
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}
// ������ʮ������ת��Ϊ��������������
int decimalToBinary(int n) {
    int binary = 0;
    int base = 1; // ���ڼ��������λ��Ȩ��

    while (n > 0) {
        int remainder = n % 2;
        binary = binary + remainder * base;
        n = n / 2;
        base = base * 10; // ����Ȩ��
    }

    return binary;
}

int main() {
    int num;
    printf("������һ��������");
    scanf("%d", &num);
    printf("�����Ʊ�ʾ��");
    intToBinary(num);
    printf("\n");
    return 0;
}


