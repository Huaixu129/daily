#include <stdio.h>
int maxSubmatrixSum(int m, int n, int x, int y, int matrix[m][n])
{
    int maxSum = 0;
    for (int i = 0; i <= m - x; i++)
    {
        for (int j = 0; j <= n - y; j++)
        {
            int currentSum = 0;
            for (int k = i; k < i + x; k++)
            {
                for (int v = j; v < j + y; v++)
                {
                    currentSum += matrix[k][v];
                }
            }
            maxSum = currentSum > maxSum ? currentSum : maxSum;
        }
    }
    return maxSum;
}
int main() {
    int n;
    while(scanf("%d",&n)!=EOF&&n>0){
        int m,n,x,y;
        scanf("%d%d%d%d",&m,&n,&x,&y);
        int matrix[m][n];
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                scanf("%d",&matrix[i][j]);
            }
        }       
        int result = maxSubmatrixSum(m,n,x,y,matrix);
        printf("%d",result);
    }
    return 0;
}