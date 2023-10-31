#include <stdio.h>
#include <math.h>

int main() {
    double R1, P1, R2, P2;
    scanf("%lf %lf", &R1, &P1);
    scanf("%lf %lf", &R2, &P2);
    double R = R1 * R2;
    double P = P1 + P2;
    double A = R * cos(P);
    double B = R * sin(P);
    if (B >= 0) {
        printf(" %.2lf+%.2lfi\n", A, B);
    } else {
        printf(" %.2lf-%.2lfi\n", A, -B);
    }

    return 0;
}
