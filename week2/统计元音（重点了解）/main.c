#include<stdio.h>
#include<string.h>
int main()
{
    int n, a, e, i, o, u,len;
    char ch[100],h;
    scanf("%d", &n);
    getchar();         //getchar();：用于读取并丢弃输入流中的一个字符，通常用于清除缓冲区
    for(int j=0;j<n;j++)
    {
        gets(ch);      //gets(ch);：用于从标准输入读取一行字符串，并将其存储在字符数组 ch 中
        len = strlen(ch);   //len = strlen(ch);：计算字符串 ch 的长度，并将结果存储在变量 len 中
        a = 0; e = 0; i = 0;
        o = 0; u = 0;
        for (int p = 0; p < len; p++)
        {
            h = ch[p];
            if (h == 'a')
                a++;
            if (h == 'e')
                e++;
            if (h == 'i')
                i++;
            if (h == 'o')
                o++;
            if (h == 'u')
                u++;
        }
        printf("a:%d\n", a);
        printf("e:%d\n", e);
        printf("i:%d\n", i);
        printf("o:%d\n", o);
        printf("u:%d\n", u);
        if (j != (n - 1))
           printf("\n");
    }
    return 0;
}
