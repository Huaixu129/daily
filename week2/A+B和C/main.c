#include <stdio.h>
int main()
{
    long long A, B, C;
    int X, i, j;
    scanf("%d", &X);
    long nums[X][3];
    for(i=0;i<X;i++){
        for (j=0;j<3;j++){
            scanf("%d",&nums[i][j]);
        }
    }
    for(i=0;i<X;i++){
            if(nums[i][0]+nums[i][1]>nums[i][2]){
                printf("Case #%d: true\n",i+1);
            }else{
                printf("Case #%d: false\n",i+1);
            }
    }
    return 0;
}