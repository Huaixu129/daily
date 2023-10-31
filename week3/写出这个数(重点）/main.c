// #include<stdio.h>
// int main()
// {
// 	int s=0,i=0,t=0,a[100];
// 	char str[101];
// 	char pinyin[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
// 	gets(str);
// 	while(str[i])
// 	{
// 		s+=str[i++]-'0';
// 	}
// 	while(s)
// 	{
// 		a[t++]=s%10;
// 		s/=10;
// 	}
// 	for(i=t-1;i>=0;i--)
// 	{
// 		printf("%s ",pinyin[a[i]]);
// 	}
// 	return 0;
// }
#include <stdio.h>
int main() {
    int s=0,t=0,i=0,a[100];
    char str[101];
    char pinyin[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    gets(str);
    while(str[i]){
        s += str[i++]-'0';
    }
    while(s){
        a[t++]=s%10;
        s/=10;
    }
    for(i=t-1;i>=0;i--){
        printf("%s ",pinyin[a[i]]);
    }
    return 0;
}