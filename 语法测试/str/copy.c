/*
<syting.h>�еĿ⺯��Ӧ�ã�
1.strcpy() == char* strcpy(char *s1,const char *s2){}��s2��ȫcopy��s1
2.strncoy() == char* strncpy(char *s1,const char *s2,size_t n){}��s2copy n λ��s1
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char* copy_str(char* old,const char* new){
    char* t=old;
    while(*old++ = *new++){
        ;
    }
    return t;
}
int main() {
    char old[100] = "ABCD";
    char * new = malloc(100*sizeof(char));
    printf("%s\n",old);
    scanf("%s",new);
    strncpy(old,new,5);
    printf("%s\n",old);
    free(new);
    return 0;
}