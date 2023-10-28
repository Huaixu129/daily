/*绝对值排序
Problem Description
输入n(n<=100)个整数，按照绝对值从大到小排序后输出。题目保证对于每一个测试实例，所有的数的绝对值都不相等。
Input
输入数据有多组，每组占一行，每行的第一个数字为n,接着是n个整数，n=0表示输入数据的结束，不做处理。
Output
对于每个测试实例，输出排序后的结果，两个数之间用一个空格隔开。每个测试实例占一行。
Sample Input
3 3 -4 2
4 0 1 2 -3
0
Sample Output
-4 3 2
-3 2 1 0
*/
#include <stdio.h>
int main()
{
    int n,m,k,v=0;int i = 0;
    printf("please input a (+)integer :\n");
    scanf("%d",&n);
    int nums[n],Nums[n];
    nums[0]=n,Nums[0]=n;
    do {
        int s=0;
        i++;
        printf("please input a integer :\n");
        scanf("%d",&m);
        Nums[i]=m;
        s=m>0?m:-m;
        nums[i]=s;
    }while(i<n);
    for (k=1;k<=n-1;k++){
        for (v=0;v<n-k;v++){
            if (nums[v]<nums[v+1]){
                int t =nums[v];nums[v]=nums[v+1];nums[v+1]=t;
                int h =Nums[v];Nums[v]=Nums[v+1];Nums[v+1]=h;
            }
        }
    }
    for (i=0;i<n;i++){
        printf("%d ",Nums[i]);
    }
    return 0;
}