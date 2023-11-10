#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char * multiply(char *num1, char *num2) {
    int len_num1 = strlen(num1);
    int len_num2 = strlen(num2);
    int sum = 0;
    int x = 1;
    for (int i=len_num1-1;i>=0;i--){
        int y=1;
        for (int j=len_num2-1;j>=0;j--){
            sum += (num1[i]-'0')*(num2[j]-'0') * x * y;
            y*=10;
        }
        x *= 10;
    }
    char * str = (char*)malloc(50*sizeof(char));
    sprintf(str, "%d", sum);
    return str;
}
int main() {
char num1[10] = "1234";
char num2[10] = "4567";
char * num3 = multiply(num1, num2);
printf("%s",num3);
return 0;
}
