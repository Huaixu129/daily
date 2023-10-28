/*判断）输入三个实数，判断组成三角形形状。若为正三角形则
 输出1，为等腰三角形则输出2，为任意三角形则输出3，不能构成三角形则输出0*///     int a,b,c,i;
#include <stdio.h>
int main() {
    int a, b, c ;
    printf("please input three numbers:");
    scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);
    if (a >= (b + c) || b >= (a + c) || c >= (b + a)) {
        puts("0");
    } else {
        if (a == b && b == c) {
            puts("1");
        } else if (a == b || a == c || b == c) {
            puts("2");
        } else {
            puts("3");
        }
    }
}
