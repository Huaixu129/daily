#include <stdio.h>
int main() 
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        int sallary[n];
        for (int i=0;i<n;i++){
            scanf("%d",&sallary[i]);
        }
        int a;
        scanf("%d",&a);
        int sum=0;
        for (int i=0;i<n;i++){
            sum += sallary[i]/100+sallary[i]%100/50+sallary[i]%50/10+sallary[i]%10/5+sallary[i]%5/2
            +sallary[i]%2/1;
        }
        printf("%d",sum);
    }
    return 0;
}