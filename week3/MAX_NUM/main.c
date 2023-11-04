#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int t; scanf("%d",&t);double max=0;
        double nums[t];
        for(int j=0;j<t;j++){
            scanf("%lf",&nums[j]);
            if (max<nums[j])
            max = nums[j];
        }
        printf("%.2lf",max);
    }
    return 0;
}