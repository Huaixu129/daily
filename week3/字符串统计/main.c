#include <stdio.h>
#include <ctype.h>
char *keepDigit(char *arr, char *digit)
{
    int i, j;
    for (i = 0, j = 0; arr[i] != '\0'; i++)
    {
        if (isdigit(arr[i]))
        {
            digit[j] = arr[i];
            j++;
        }
    }
    digit[j] = '\0';
    return digit;
}
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            int result = 0;
            char arr[100];
            char digit[100];
            scanf("%s", arr);
            keepDigit(arr,digit);
            // printf("%s\n", keepDigit(arr, digit));
            for(int j=0;digit[j]!='\0';j++)
            result++;
            printf("%d",result);
        }
    }
    return 0;
}