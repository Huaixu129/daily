#include <stdio.h>
int main() {
    int ch;
    while ((ch = getchar())!= EOF){
        putchar(ch);
    }
    printf("ab\'c");
    return 0;
}