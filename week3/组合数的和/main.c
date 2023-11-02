#include <stdio.h>

int main() {
    int N, sum = 0;
    scanf("%d", &N);
    int num[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(i != j) {
                sum += num[i]*10 + num[j];
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}
