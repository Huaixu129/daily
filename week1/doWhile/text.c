#include <stdio.h>
int main() {
    int n=1,t=1;
    int sum=0,i = 0;
    do{
        printf("please input a intnumber :\n");
        scanf("%d",&n);
        sum += n;
        i++;
        printf("To continue typing, press 1\n");
        scanf("%d",&t);
    }while (t==1);
    int e = sum / i ;
    printf("The average number is %d\n",e);
    return 0;
}
