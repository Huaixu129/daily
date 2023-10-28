// Problem Description
// 给你n个整数，求他们中所有奇数的乘积。
// Input
// 输入数据包含多个测试实例，每个测试实例占一行，每行的第一个数为n，表示本组数据一共有n个，
// 接着是n个整数，你可以假设每组数据必定至少存在一个奇数。
// Output
// 输出每组数中的所有奇数的乘积，对于测试实例，输出一行
// Sample Input
// 3 1 2 3  
//4 2 3 4 5
// Sample Output
// 3 15
// #include <stdio.h>
// int main() {
//     int i,n,m,nums[n];int s = 0;
//     printf("请输入任意一个正整数:\n");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("q请输入一个数字:\n");
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
