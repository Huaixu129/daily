#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    int flag[256] = {0};
    char in[81] = "", out[81] = "";
    scanf("%s", in);
    scanf("%s", out);
    for (int i = 0; out[i]; i++)
    {
        flag[toupper(out[i])] = 1;
    }
    for (int i = 0; in[i]; i++)
    {
        if (flag[toupper(in[i])] == 0)
        {
            printf("%c", toupper(in[i]));
            flag[toupper(in[i])] = -1;
        }
    }
    return 0;
}