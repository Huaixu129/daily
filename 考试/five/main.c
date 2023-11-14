#include <stdio.h>
int main() {
    int n,x;
    scanf("%d%d",&n,&x);
    int allFood[n];
    for (int i=0;i<n;i++){
        scanf("%d",&allFood[n]);
    }
    int index[n];
    for(int i=0;i<n;i++){
        index[i]=0;int sum=0;
        int j=i;
        while(sum-x<0){
            sum+=allFood[j];
            j++;
            index[i]++;
            if(j==n){
                index[i]=n;
                break;
            }
        }
    }
    int min=index[0];
    for (int i=1;i<n-1;i++){
        if (index[i]<min)
            min=index[i];
    }
    // for (int i=0;i<n;i++){
    //     if(min==index[i]){
    //         printf("%d %d",i,i+-1+min);
    //     }
    // }
    return 0;
}