#include <stdio.h>
int main(){
    int n,step=0;
do{
    scanf("%d",&n);
}while(n<=0||n>1000);
    do{
        if (n%2!=0) {
            n=(3*n+1)/2;
            step++;
        }else{
            n/=2;
            step++;
        }
    }while(n!=1);
printf("%d",step);
return 0;
}