#include<stdio.h>
int main() {
    char nums[11],nums1[11];
    int b,d;
    int n=1,n1 = 1;int sum=0,sum1=0;
    scanf("%s%d%s%d",&nums,&b,&nums1,&d);
    for(int i=0;nums[i]!='\0';i++){
        if(nums[i]-'0'==b){
            sum+=(nums[i]-'0')*n;
            n*=10;
        }
    }
    for(int i=0;nums1[i]!='\0';i++){
        if(nums1[i]-'0'==d){
            sum1+=(nums1[i]-'0')*n1;
            n1*=10;
        }
    }
    printf("%d",sum+sum1);
    return 0;
}
