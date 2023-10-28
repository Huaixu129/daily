#include <stdio.h>
int main() {
    int b;
    printf("please input a number:\n");
    do
    {   
        int a;
        scanf("%d",&a);
        if (a % 2) {
            printf("this is a odd number\n");
        }else{
            printf("this is a even\n");
        }
        printf("Do you want to repeat it again?yes...1,no...0\n");
        scanf("%d",&b);
    } while (b==1);   // while b==1,circulate
    return 0;
}