#include<stdio.h>
#include<string.h>
int main() {
    //strcat() == char* strcat(char* s1,const char* s2){}将s2连接到s1句尾
    //strncat() == char* strncat(char* s1,char* s2,size_t n){}将s2前n个字符连接到s1句尾
    char s1[]="djshak";
    char s2[]="_hdsuh\n";
    printf("%s",strcat(s1,s2));
    //strcmp() == int strcmp(const char*s1,const char*s2){}将s1与s2一一对比，直到判断出大小；
    //strncmp() == int strcmp(const char*s1,const char*s2,size_t n)不多做解释
    char s3[]="12346";
    char s4[]="12346";
    printf("%d",strcmp(s3,s4));
    return 0;
}