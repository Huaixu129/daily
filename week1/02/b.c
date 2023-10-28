/*(switch语句)输入两门课的成绩，如果两门成绩都在60分以上。则输出“it is pass.”
只要有一门低于60分就输出“it is not pass.”
如果输入的任何一门成绩不在0-100范围内则输出“it is error.”*/
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
