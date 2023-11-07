#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int id[N],score[N+1];
    for (int i=0;i<N;i++){
        scanf("%d%d",&id[i],&score[i]);
    }
    int sum[N+1];
    for (int i=0;i<N+1;i++){
        sum[i]=0;
    }
    for (int i=0;i<N;i++){
        sum[id[i]]+=score[i];
    }
    int max=0, maxId=0;
    for(int i=0;i<N+1;i++){
        if(sum[i]>max){
            max=sum[i];
            maxId=i;
        }
    }
    printf("%d %d",maxId,max);
    return 0;
}