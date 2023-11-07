#include <stdio.h>
int main() 
{
    int M,N,A,B,K;
    scanf("%d%d%d%d%d",&M,&N,&A,&B,&K);
    int colar[M][N]; 
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&colar[i][j]);
        }
    }
    for (int i=0;i<M;i++){
        for (int j=0;j<N;j++){
            if (colar[i][j]<=B && colar[i][j]>=A)
                printf("%03d",K);
            else
                printf("%03d",colar[i][j]);
            if(j<N-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
