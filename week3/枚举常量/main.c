#include <stdio.h>
int main() {
    
    enum color {a,b,c,d,e};//ö��������ʡ��
    enum  {f,g,h=1,j,k};
    printf("%d %d %d %d %d ",a,b,c,d,e);
    printf("%d %d %d %d %d ",f,g,h,j,k);
}