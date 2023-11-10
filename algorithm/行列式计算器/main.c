#include <stdio.h>

// �����������С
#define MAX_SIZE 10

// ��������������ʽ
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
    printf("�������Ľ�����");
    scanf("%d", &size);

    int matrix[MAX_SIZE][MAX_SIZE];

    printf("�������Ԫ�أ�\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int determinant = calculateDeterminant(matrix, size);
    printf("����ʽ��ֵ�ǣ�%d\n", determinant);

    return 0;
}
