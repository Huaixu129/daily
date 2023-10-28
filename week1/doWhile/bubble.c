#include <stdio.h>
int main()
{
    int nums[9] = {16, 2, 4, 6, 8, 12, 10, 14, 18};
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        printf("%d\t", nums[i]);
    }
    getchar();
    getchar();
    return 0;
}