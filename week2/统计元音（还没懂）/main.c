#include<stdio.h>
#include<string.h>
int main()
{
    int n, a, e, i, o, u,len;
    char ch[100],h;
    scanf("%d", &n);
    getchar();         //getchar();�����ڶ�ȡ�������������е�һ���ַ���ͨ���������������
    for(int j=0;j<n;j++)
    {
        gets(ch);      //gets(ch);�����ڴӱ�׼�����ȡһ���ַ�����������洢���ַ����� ch ��
        len = strlen(ch);   //len = strlen(ch);�������ַ��� ch �ĳ��ȣ���������洢�ڱ��� len ��
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
