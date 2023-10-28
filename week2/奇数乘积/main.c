// Problem Description
// ����n�������������������������ĳ˻���
// Input
// �������ݰ����������ʵ����ÿ������ʵ��ռһ�У�ÿ�еĵ�һ����Ϊn����ʾ��������һ����n����
// ������n������������Լ���ÿ�����ݱض����ٴ���һ��������
// Output
// ���ÿ�����е����������ĳ˻������ڲ���ʵ�������һ��
// Sample Input
// 3 1 2 3  
//4 2 3 4 5
// Sample Output
// 3 15
// #include <stdio.h>
// int main() {
//     int i,n,m,nums[n];int s = 0;
//     printf("����������һ��������:\n");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("q������һ������:\n");
//         scanf("%d",&m);
//         nums[i]=m;
//         if( m/2 != 0){
//             s++;
//         }
//     }
//     int oddNums[s],j = 0;
//     for(i=0;i<n;i++){
//         if(nums[i] % 2!=0){
//             oddNums[j]=nums[i];
//             j++;
//         }
//     }
//     int f = 1;
//     for (i=0;i<s;i++){
//         f *= oddNums[i];
//     }
//     printf("%d",f);
//     return 0;
// }
#include <stdio.h>

int main() {
    int n; 
    while (scanf("%d", &n) != EOF) {
        int product = 1; 
        for (int i = 0; i < n; i++) {
            int num;
            scanf("%d", &num);
            if (num % 2 != 0) {
                product *= num;
            }
        }
        printf("%d\n", product);
    }
    return 0;
}
