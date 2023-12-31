/*
青年歌手大奖赛中，评委会给参赛选手打分。选手得分规则为去掉一个最高分和一个最低分，然后计算平均得分，请编程输出某选手的得分。
Input
输入数据有多组，每组占一行，每行的第一个数是n(2<n<=100)，表示评委的人数，然后是n个评委的打分。
Output
对于每组输入数据，输出选手的得分，结果保留2位小数，每组输出占一行。
Sample Input
3 99 98 97
4 100 99 98 97
Sample Output
98.00
98.50
*/
#include <stdio.h>
int getMax(int num, int *max)
{
    if (num >= *max)
        *max = num;
    return *max;
}

int getMin(int num, int *min)
{
    if (num <= *min)
        *min = num;
    return *min;
}

int main()
{
    int n, num;
    int sum = 0, max = 0, min = 100;

    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &num);
            getMax(num, &max);
            getMin(num, &min);
            sum += num;
        }
        printf("n=%d, max=%d, min=%d\n", n, max, min);
        double average = (double)(sum - max - min) / (double)(n - 2);
        printf("Average=%.2f\n", average);
    }
    return 0;
}
