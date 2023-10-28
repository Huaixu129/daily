/*�ڼ��죿
Problem Description
����һ�����ڣ������������Ǹ���ĵڼ��졣
Input
���������ж��飬ÿ��ռһ�У����ݸ�ʽΪYYYY/MM/DD��ɣ�����μ�sample input ,���⣬��������ȷ�����е����������ǺϷ��ġ�
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
