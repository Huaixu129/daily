#include <stdio.h>
#include <stdbool.h>

// ��֤���֤�����У�����Ƿ���Ч
bool isCheckCodeValid(char id[18]) {
    int weights[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char checkCodes[] = "10X98765432";
    int sum = 0;

    for (int i = 0; i < 17; i++) {
        if (id[i] < '0' || id[i] > '9') {
            return false; // ǰ17λ���붼������
        }
        sum += (id[i] - '0') * weights[i];
    }

    int Z = sum % 11;
    return id[17] == checkCodes[Z];
}

int main() {
    int N;
    scanf("%d", &N);

    bool allPassed = true;

    for (int i = 0; i < N; i++) {
        char id[18];
        scanf("%s", id);
        if (!isCheckCodeValid(id)) {
            printf("%s\n", id);
            allPassed = false;
        }
    }
    if (allPassed) {
        printf("All passed\n");
    }
    return 0;
}
