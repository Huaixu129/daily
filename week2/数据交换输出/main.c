/*����n(n<100)�������ҳ�������С��������������ǰ����������������Щ����
Input
���������ж��飬ÿ��ռһ�У�ÿ�еĿ�ʼ��һ������n����ʾ�������ʵ������ֵ�ĸ��������ž���n��������n=0��ʾ����Ľ�������������
Output
����ÿ���������ݣ��������������У�ÿ�����ռһ�С�
Sample Input
4 2 1 3 4
5 5 4 3 2 1
0
Sample Output
1 2 3 4
1 4 3 2 5*/
#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF&&n!=0){
        int i,x,nums[n];
        for(i=0;i<n;i++){
            scanf("%d",&x);
            nums[i]=x;
        }
        int min = nums[0];
        for(i=0;i<n;i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }
        for(i=0;i<n;i++){
            if(nums[i]==min){
                int temp =nums[0];
                nums[0]=nums[i];
                nums[i]=temp;
            }
        }
        for(i=0;i<n;i++){
            printf("%d ",nums[i]);
        }
    }
    return 0;
}