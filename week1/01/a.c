/*�жϣ���������ʵ�����ж������������״����Ϊ����������
 ���1��Ϊ���������������2��Ϊ���������������3�����ܹ��������������0*///     int a,b,c,i;
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
