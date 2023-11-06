#include <stdio.h>
void countChar(char *str)
{
    int asc[256] = {0};
    while (*str)
    {
        if (*str <= 'Z' && *str >= 'A')
            asc[(unsigned char)(*str + 32)]++;
        else if (*str <= 'z' && *str >= 'a')
        {
            asc[(unsigned char)*str]++;
            *str++;
        }
    }
    int max = 0;
    char c;
    for (int i = 'z'; i >= 'a'; i--)
    {
        if (max <= asc[i])
        {
            max = asc[i];
            c = (char)i;
        }
    }
    printf("%c %d", c, max);
}
int main()
{
    char str[1000];
    scanf("%s", str);
    countChar(str);
    return 0;
}