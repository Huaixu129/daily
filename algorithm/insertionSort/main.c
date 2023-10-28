//²åÈëÅÅĞò
#include <stdio.h>
int main() {
    int nums[5],i,j,key,m;
    for (i=0;i<5;i++){
        printf("please input a number");
        scanf("%d",&m);
        nums[i]=m;
    }
    for (i=1;i<5;i++) {
        key = nums[i];
        j = i-1;
    while (j>=0&&nums[j]>key) {
        nums[j+1]=nums[j];
        j--;
    }
    nums[j+1]=key;
    }
    for(i=0;i<5;i++){
        printf("%d\t",nums[i]);
    }
    return 0;
}