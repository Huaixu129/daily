#include <stdio.h>
int main() {
    int i,j,k;
    for (i=1;i<=5;i++){
        if(i<=3){
            for (j=1;j<=3-i;j++){
                printf(" ");
            }
            for (k=1;k<=2*i-1;k++){
                printf("*");
            }
        }
        if(i>3){
            for (j=1;j<=i-3;j++){
                printf(" ");
            }
            for (k=1;k<=11-2*i;k++){
                printf("*");
            }
        }
        printf("\n");
    }
    getchar();getchar();
    return 0;
}