#include <stdio.h>

int main() {
    int coefficient, exponent;
    int isFirstTerm = 1;  
    while (scanf("%d %d", &coefficient, &exponent) != EOF) {
        int derivativeCoefficient = coefficient * exponent;
        int derivativeExponent = exponent - 1;

        if (derivativeCoefficient != 0) {
            if (!isFirstTerm) {
                printf(" ");
            }
            printf("%d %d", derivativeCoefficient, derivativeExponent);
            isFirstTerm = 0; 
        }
    }

    if (isFirstTerm) {
        printf("0 0");
    }

    return 0;
}
