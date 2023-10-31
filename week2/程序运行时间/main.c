#include <stdio.h>
#include <math.h>
#define CLK_TCK 100
int main() {
    int hh,mm,ss,c1,c2;
    scanf("%d%d",&c1,&c2);
    ss = round((double)(c2-c1)/CLK_TCK);
    hh = ss / 3600;
    mm = ss%3600/60;
    ss = ss - (hh*3600+mm*60);
    printf("%d:%d:%d",hh,mm,ss);
}