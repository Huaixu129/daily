#include<stdio.h>
#include<math.h>
int main() {
    printf("%lf\n",fabs(-3.14));//ȡ����ֵ��ʵ��Ϊ double fabs(double x)
    printf("%lf",ceil(3.14));//����ȡ����ʵ��Ϊ double ceil(double x) ����ȡ����ʵ��Ϊ double floor(double x)
    //double pow(double a,double b) ����a^b; double sqrt(double x) ��ƽ��
    //������ȡģ��double fmod(double a, double b) �������м�Ϊa%b
    //double log(double a, double b) == loga(b) ; double log2(double,b) == log2(b)
    //double sin(double  x) #pi=3.1415926536  cos; tan ͬ��
    //�����Ǻ��� asin();acos();atan()
    return 0;
}