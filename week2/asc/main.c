/*Problem Description
���������ַ��󣬰����ַ���ASCII���С�����˳������������ַ�
Input
���������ж��飬ÿ��ռһ�У��������ַ���ɣ�֮���޿ո�
Output
����ÿ���������ݣ����һ�У��ַ��м���һ���ո�ֿ���
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
