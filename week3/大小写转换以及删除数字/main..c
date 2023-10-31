#include <stdio.h>
#include <ctype.h>
void str_tolower(char a[]){
    int i=0;
    while(a[i]){
        a[i]=tolower(a[i]);
        i++;
    }
}
void str_toupper(char a[]){
    int i=0;
    while(a[i]){
        a[i]=toupper(a[i]);
        i++;
    }
}
void rmv_digit(char a[]){
    int i,j;
    for(i=0,j=0;a[i]!='\0';i++){
        if(!isdigit(a[i])){
            a[j]=a[i];
        }
    }
}
int main() {
    char s[101];
    gets(s);
    printf("%s\n",s);
    str_tolower(s);
    printf("%s\n",s);
    str_toupper(s);
    printf("%s\n",s);
    return 0;
}