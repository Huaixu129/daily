// #include <stdio.h>
// int main() {
//     int a[1001];
//     a[1]=0;a[2]=2;a[3]=2;
//     int i,n;
//     for (i=4;i<=1000;++i){
//         a[i]=(2*a[i-2]+a[i-1]);
//     }
//     while(scanf("%d",&n)!=EOF&&n!=0){
//         printf("%d",a[n]);
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    char nums[1001];
    scanf("%s",nums);
    int sum=0;int j=0;
    while(nums[j]){
        sum+=nums[j]-'0';
        j++;
    }
    return 0;
}
