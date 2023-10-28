#include <stdio.h>
int main() {
    int a,b;
    printf("please input two integer :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<b){
        int tEmp = a;
        a = b;
        b = tEmp;
    }
    while(b!=0){
        int temp = a%b;
        a = b;
        b = temp;
    }
    printf("%d",a);
    return 0;
}