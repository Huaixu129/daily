/*
������ִ����У���ί�������ѡ�ִ�֡�ѡ�ֵ÷ֹ���Ϊȥ��һ����߷ֺ�һ����ͷ֣�Ȼ�����ƽ���÷֣��������ĳѡ�ֵĵ÷֡�
Input
���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ������n(2<n<=100)����ʾ��ί��������Ȼ����n����ί�Ĵ�֡�
Output
����ÿ���������ݣ����ѡ�ֵĵ÷֣��������2λС����ÿ�����ռһ�С�
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
