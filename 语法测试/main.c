#include <stdio.h>
#include <string.h>
int str_length(const char* str){
    int len = 0;
    while(*str++){
        len++;
    }
    return len;
}
int main() {
    char str2[] = "hello_world" ;
     char * str = "hello_world";
    printf("%s\t%s\n",str,str2);
    str = "helloworld";//OK
    //str2 = "hello" ����
    printf("---------------------\n");
    char * str1[] = {"hello","world"};//�����Ŷ�Ӧ����Ԫ�ظ�������ͬ
    char a[][5]={"hello","world"};
    printf("%d\n",str_length(str));
    printf("%d",strlen(str));
    return 0;
}
