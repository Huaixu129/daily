/*Problem Description
输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符
Input
输入数据有多组，每组占一行，有三个字符组成，之间无空格。
Output
对于每组输入数据，输出一行，字符中间用一个空格分开。
Sample Input
qwe
asd
zxc
Sample Output
e q w
a d s
c x z
*/
// #include <stdio.h>
// int main()
// {
//     char A, B, C ;
//     while (scanf("%c %c %c", &A, &B, &C) != EOF)
//     {
//         int i,j;
//         char asc[3]={A,B,C};
//         for (i = 0; i < 2; i++) {
//             for (j = 0; j < 2 - i; j++) {
//                 if (asc[j] > asc[j + 1]) {
//                     char t = asc[j];
//                     asc[j] = asc[j + 1];
//                     asc[j + 1] = t;
//                 }
//             }
//         }
//         for (i = 0; i < 3; i++)
//         {
//             printf("%c ", asc[i]);
//         }
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    char A, B, C;
    while (scanf("%c%c%c", &A, &B, &C) != EOF) {
        int i, j;
        char asc[3] = {A, B, C};
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2 - i; j++) {
                if (asc[j] > asc[j + 1]) {
                    char t = asc[j];
                    asc[j] = asc[j + 1];
                    asc[j + 1] = t;
                }
            }
        }
        for (i = 0; i < 3; i++) {
            printf("%c ", asc[i]);
        }
        printf("\n");
        getchar();
    }
    
    return 0;
}
