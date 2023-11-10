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
int absoluteValue(int num){
    num = num>=0?num:-num;
    return num;
}
void swap(int A,int B){
    int temp = A;
    A = B;
    B = temp;
}
int main() {
    int n;
    while(scanf("%d",&n)!=EOF&&n!=0){
        int inputNums[n];
        for(int i=0;i<n;i++){
            scanf("%d",&inputNums[i]);
        }
        
        for(int i=0;i<n-1;i++){
            for (int j=0;j<n-i-1;j++){
                if (absoluteValue(inputNums[j])<absoluteValue(inputNums[j+1])){
                    swap(inputNums[j],inputNums[j+1]);
                }
            }
        }
        for (int i=0;i<n;i++){
            printf("%d ",inputNums[i]);
        }
        printf("\n");
    }
    return 0;
}