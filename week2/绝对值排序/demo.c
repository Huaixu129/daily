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