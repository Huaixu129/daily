#include <stdio.h>

// 定义最大矩阵大小
#define MAX_SIZE 10

// 函数：计算行列式
int calculateDeterminant(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    int det = 0;
    int submatrix[MAX_SIZE][MAX_SIZE];

    if (size == 2) {
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    } else {
        for (int col = 0; col < size; col++) {
            int submatrixRow = 0;
            for (int i = 1; i < size; i++) {
                int submatrixCol = 0;
                for (int j = 0; j < size; j++) {
                    if (j != col) {
                        submatrix[submatrixRow][submatrixCol] = matrix[i][j];
                        submatrixCol++;
                    }
                }
                submatrixRow++;
            }
            int sign = (col % 2 == 0) ? 1 : -1;
            det += (sign * matrix[0][col] * calculateDeterminant(submatrix, size - 1));
        }
    }
    return det;
}

int main() {
    int size;
    printf("输入矩阵的阶数：");
    scanf("%d", &size);

    int matrix[MAX_SIZE][MAX_SIZE];

    printf("输入矩阵元素：\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int determinant = calculateDeterminant(matrix, size);
    printf("行列式的值是：%d\n", determinant);

    return 0;
}
