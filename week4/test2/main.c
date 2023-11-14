#include<stdio.h>
int main() {
    int n, a[3]={0}, t=0;
    char str[3]="BS";
    scanf("%d",&n);
    while(n){
        a[t++]=n%10;
        n/=10;
    }
    for(int i=2;i>=0;i--){
        if(i!=0){
            for(int j=0;j<a[i];j++){
                if(i==2){
                    printf("%c",str[0]);
                }else{
                    printf("%c",str[1]);
                }
            }
        }
        else{
            for (int j=0;j<a[i];j++)
            printf("%d",j+1);
        }
    }
    return 0;
}