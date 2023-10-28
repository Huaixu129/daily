/*第几天？
Problem Description
给定一个日期，输出这个日期是该年的第几天。
Input
输入数据有多组，每组占一行，数据格式为YYYY/MM/DD组成，具体参见sample input ,另外，可以向你确保所有的输入数据是合法的。
Output
Sample Input
?1985/1/20
2006/3/12
Sample Output
20
71*/
#include <stdio.h>

int main() {
    int year, month, day;
    int calendar[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char sign;
    int i;
    while (scanf("%d", &year) != EOF) {
        int result = 0;
        scanf(" %c%d %c%d", &sign, &month, &sign, &day);
        for (i = 0; i < month - 1; i++) {
            result += calendar[i];
        }
        printf("%d\n", result+day);
    }

    return 0;
}
