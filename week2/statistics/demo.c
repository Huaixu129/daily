#include <stdio.h>
#define NUMBER 80
int main()
{
    int i, n, j;

    printf("please input the numbers of student :\n");
    do
    {
        scanf("%d", &n);
        if (n < 1 || n > NUMBER)
            printf("0<n<80\n");
    } while (n < 1 || n > NUMBER);
    int nums[NUMBER], bunpu[10] = {0};
    for (i = 0; i < n; i++)
    {
        printf("please input the score of %2dth :\n", i + 1);
        do
        {
            scanf("%d", &nums[i]);
            if (nums[i] < 0 || nums[i] > 100)
                printf("please input a number <100 && >0\n");
        } while (nums[i] < 0 || nums[i] > 100);
        bunpu[nums[i] / 10]++;
    }
    printf("Distribution map------------\n");
    for (i = 9; i >= 0; i--) {
        printf("%3d to %3d\t", 10 * i, i * 10 + 9);
        for (j = 0; j < bunpu[i]; j++)
            putchar('*');
        printf("\n");
    }
}
