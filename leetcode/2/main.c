#include<stdio.h>
#include<stdlib.h>
void rotate1(int** matrix, int matrixSize, int* matrixColSize) {
    int matrix_new[matrixSize][matrixSize];
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            matrix_new[i][j] = matrix[i][j];
        }
    }
    for (int i = 0; i < matrixSize; ++i) {
        for (int j = 0; j < matrixSize; ++j) {
            matrix[matrixSize - i - 1][j] = matrix_new[j][i];
        }
    }
}
void rotate2(int** matrix, int matrixSize,int*matrixColSize) {
    int n = matrixSize;
    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < (n + 1) / 2; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][matrixSize-1-j];
            matrix[i][matrixSize-1-j]=matrix[matrixSize-1-i][matrixSize-1-j];
            matrix[matrixSize-1-i][matrixSize-1-j]=matrix[matrixSize-1-i][j];
            matrix[matrixSize-1-i][j]=temp;
        }
    }
}

int main() {
    int matrixSize = 3;
    int matrixColSize = 3;
    
    // 创建并初始化一个3x3的二维数组
    int **matrix = malloc(matrixSize * sizeof(int *));
    for(int i = 0; i < matrixSize; i++){
        matrix[i] = malloc(matrixColSize * sizeof(int));
    }    
    matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 3;
    matrix[1][0] = 4; matrix[1][1] = 5; matrix[1][2] = 6;
    matrix[2][0] = 7; matrix[2][1] = 8; matrix[2][2] = 9;
    
    // 调用rotate函数
    // rotate1(matrix, matrixSize, &matrixColSize);
    rotate2(matrix, matrixSize, &matrixColSize);
    // 打印旋转后的矩阵
    for(int i = 0; i < matrixSize; i++){
        for(int j = 0; j < matrixColSize; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // 释放内存
    for(int i = 0; i < matrixSize; i++){
        free(matrix[i]);
    }
    
    free(matrix);

    return 0;
}
