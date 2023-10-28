#include<stdio.h>
#include<math.h>
int main() {
    printf("%lf\n",fabs(-3.14));//取绝对值，实际为 double fabs(double x)
    printf("%lf",ceil(3.14));//向上取整，实际为 double ceil(double x) 向下取整，实际为 double floor(double x)
    //double pow(double a,double b) 计算a^b; double sqrt(double x) 开平方
    //浮点数取模：double fmod(double a, double b) 在整数中即为a%b
    //double log(double a, double b) == loga(b) ; double log2(double,b) == log2(b)
    //double sin(double  x) #pi=3.1415926536  cos; tan 同理
    //反三角函数 asin();acos();atan()
    return 0;
}