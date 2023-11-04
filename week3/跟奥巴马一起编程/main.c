#include <stdio.h>
int main()
{
    int n; char s;
    do
    {
        scanf("%d %c", &n, &s);
    } while (n < 3 || n > 20);
    int row = n%2==0?n/2:(n+1)/2;
    for(int i=0;i<row;i++){
        if (i==0||i==row-1){
            for(int j=0;j<n;j++)
            printf("%c",s);
        }else{
            for(int j=0;j<n;j++){
                if(j==0||j==n-1){
                    printf("%c",s);
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}