// ��ӡ��1~100���ڵ�������ÿ�������һ�С�
#include <stdio.h>
int main()
{
    int i, j = 0;int m = 1;
    for (i = 1; i <= 100; i++)
    {
        int n = 0; 
        for (j = 2; j < i; j++)
        {
            if (i % j == 0){
                n++;
            break;
            }
        }
        if (n == 0)
        {
            printf("%2d\t", i);
            m++;
        }
        if (m % 6 == 0)
        {
            m = 1;
          printf("\n");
        }
    }
    return 0;
}
