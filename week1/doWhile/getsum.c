#include <stdio.h>
int main()
{
    int a, b, i, sum = 0;
    printf("please input tow intergry:");
    scanf("%d",&a);
    scanf("%d",&b);
    if (b < a)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    for (i = a + 1; i < b; i++)
    {
        sum += i;
    }
    printf("The sum of the two numbers between a and b is %d", sum);
    getchar();
    getchar();
    return 0;
}