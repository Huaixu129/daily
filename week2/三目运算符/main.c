#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%s\n",(b==0||a%b!=0)?"no":"yes");
    double i;
    scanf("%lf",&i);
    printf("%lf",i);
    float j;
    scanf("%f",&j);
    printf("%f",j);
    return 0;
}
