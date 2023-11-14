#include <stdio.h>

#define N 10 // Maximum size of the system

void solveEquations(float equations[N][N + 1], int n) {
    // Implement your solution method here - Gaussian Elimination or others
    // Use 'equations' array to store the coefficients and constants

    // Example output of solutions
    printf("Solutions:\n");
    for (int i = 0; i < n; i++) {
        printf("x[%d] = %f\n", i, equations[i][n]);
    }
}

int main() {
    int n;
    printf("Enter the number of equations: ");
    scanf("%d", &n);

    float equations[N][N + 1];

    // Input the coefficients and constants
    printf("Enter the coefficients and constants:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            scanf("%f", &equations[i][j]);
        }
    }

    solveEquations(equations, n);

    return 0;
}
