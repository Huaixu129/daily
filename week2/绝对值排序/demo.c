/*����ֵ����
Problem Description
����n(n<=100)�����������վ���ֵ�Ӵ�С������������Ŀ��֤����ÿһ������ʵ�������е����ľ���ֵ������ȡ�
Input
���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ������Ϊn,������n��������n=0��ʾ�������ݵĽ�������������
Output
����ÿ������ʵ������������Ľ����������֮����һ���ո������ÿ������ʵ��ռһ�С�
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