#include <stdio.h>

// 函数用于判断一个数是否为素数
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int count = 0;int COUNT = 0;
    for (int i = 2; count < N; i++) {
        if (isPrime(i)) {
            count++;
            if (count >= M) {
                COUNT++;
                printf("%d ", i);
                if (COUNT % 10 == 0) {
                    printf("\n");
                }
            }
        }
    }
    
    return 0;
}
