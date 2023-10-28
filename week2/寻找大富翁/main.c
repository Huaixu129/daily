#include <stdio.h>
int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) && n != 0 && m != 0)
    {
        int i, j, sums[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &sums[i]);
        }
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - 1 - i; j++)
            {
                if (sums[j] < sums[j + 1])
                {
                    int temp = sums[j];
                    sums[j] = sums[j + 1];
                    sums[j + 1] = temp;
                }
            }
        }
        for (i = 0; i < m; i++)
            printf("%d ", sums[i]);
    }
    return 0;
}