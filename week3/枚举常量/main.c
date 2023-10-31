#include <stdio.h>
int main() {
    
    enum color {a,b,c,d,e};//枚举名可以省略
    enum  {f,g,h=1,j,k};
    printf("%d %d %d %d %d ",a,b,c,d,e);
    printf("%d %d %d %d %d ",f,g,h,j,k);
}