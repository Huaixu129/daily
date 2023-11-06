#include <stdio.h>
#include <string.h>
int main()
{
    int M;
    char m;
    scanf("%d", &M);
    char password[M][50];
    for (int i = 0; i < M; i++)
    {
        scanf("%s", password[i]);
    }
    for (int i = 0; i < M; i++)
    {
        int j = 0;
        int a = 0, b = 0, c = 0, d = 0;
        while (password[i][j])
        {
            m = password[i][j];
            if (m == '~' || m == '!' || m == '@' || m == '#' || m == '$' || m == '%' || m == '^')
                a = 1;
            if (password[i][j] >= '0' && password[i][j] <= '9')
                b = 1;
            if (password[i][j] >= 'a' && password[i][j] <= 'z')
                c = 1;
            if (password[i][j] >= 'A' && password[i][j] <= 'Z')
                d = 1;
            j++;
        }
        if (a + b + c + d >= 3 && strlen(password[i]) < 17 && strlen(password[i]) > 7)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}