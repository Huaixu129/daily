#include <stdio.h>

#include <stdio.h>

// 函数将整数转换为二进制表示
void intToBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }
    
    int binary[32]; // 假设使用32位来表示二进制数
    int index = 0;
    
    while (num > 0) {
        binary[index] = num % 2;
        num = num / 2;
        index++;
    }
    
    // 从后向前输出二进制位
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}
// 函数将十进制数转换为二进制数并返回
int decimalToBinary(int n) {
    int binary = 0;
    int base = 1; // 用于计算二进制位的权重

    while (n > 0) {
        int remainder = n % 2;
        binary = binary + remainder * base;
        n = n / 2;
        base = base * 10; // 更新权重
    }

    return binary;
}

int main() {
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);
    printf("二进制表示：");
    intToBinary(num);
    printf("\n");
    return 0;
}


