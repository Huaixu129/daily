#include<stdio.h>
#include<string.h>
int main() {
    //strcat() == char* strcat(char* s1,const char* s2){}��s2���ӵ�s1��β
    //strncat() == char* strncat(char* s1,char* s2,size_t n){}��s2ǰn���ַ����ӵ�s1��β
    char s1[]="djshak";
    char s2[]="_hdsuh\n";
    printf("%s",strcat(s1,s2));
    //strcmp() == int strcmp(const char*s1,const char*s2){}��s1��s2һһ�Աȣ�ֱ���жϳ���С��
    //strncmp() == int strcmp(const char*s1,const char*s2,size_t n)����������
    char s3[]="12346";
    char s4[]="12346";
    printf("%d",strcmp(s3,s4));
    return 0;
}