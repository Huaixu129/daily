#include <stdio.h>
int main() {
    int nums[10],i,j,t,m;
    for (i=0;i<10;i++){
        printf("please input a number");
        scanf("%d",&t);
        nums[i]=t;
    }
    for (i=0;i<9;i++){
        for (j=0;j<9-i;j++){
            if(nums[j]>nums[j+1]){
                m=nums[j];nums[j]=nums[j+1];nums[j+1]=m;
            }
        }
    }
    for(i=0;i<10;i++){
        printf("%d\t",nums[i]);
    }
    getchar();getchar();
    return 0;
}