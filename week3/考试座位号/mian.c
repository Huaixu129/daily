#include <stdio.h>
#include <stdlib.h>
int main() {
    int n; 
    scanf("%d",&n);
    char **zkzh = malloc(n * sizeof(int *));
    for(int i = 0; i < n; i++){
        zkzh[i] = malloc(16 * sizeof(int));
    } 
    int sj[n];int ks[n];
    for (int i=0;i<n;i++){
        scanf("%s %d %d",zkzh[i],&sj[i],&ks[i]);
    }
    int m; 
    scanf("%d",&m);
    int s[m];
    for(int i=0;i<m;i++){
        scanf("%d",&s[i]);
    }
    for (int j=0;j<m;j++){
        for(int i=0;i<n;i++){ 
        if(sj[i]==s[j]){
            printf("%s %d",zkzh[i],ks[i]);
            printf("\n");
        }
        }
    }
    getchar();
    return 0;
}