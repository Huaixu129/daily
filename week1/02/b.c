/*(switch���)�������ſεĳɼ���������ųɼ�����60�����ϡ��������it is pass.��
ֻҪ��һ�ŵ���60�־������it is not pass.��
���������κ�һ�ųɼ�����0-100��Χ���������it is error.��*/
#include <stdio.h>
int main()
{
    int math, English;
    printf("please input your score:\n");
    scanf("%d", &math);
    scanf("%d", &English);
    int condition = 1;
    if (math < 0 || math > 100 || English < 0 || English > 100)
    {
        condition = 0;
    }
    switch (condition) {
    case 0:
        printf("it is error\n");
        break;
    default:
        printf("true\n");
    }
    return 0;
}
