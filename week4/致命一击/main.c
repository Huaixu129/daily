#include <stdio.h>
int main() {
    int n;
    int c;
    scanf("%d%d",&n,&c);
    int anemy[n+1];
    int index[n];
    for (int i=0;i<n+1;i++){
        anemy[i]=0;
    }
    for (int i=0;i<n;i++){
        scanf("%d",&index[i]);
        anemy[index[i]]++;
    }
    int sum=0;
    for (int i=0;i<n;i++){
        if(c<anemy[i]){
            sum+=c;
        }else{
            sum+=anemy[i];
        }
    }
    printf ("%d",sum);
    return 0;
}