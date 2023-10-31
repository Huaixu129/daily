// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char num[1001];
// 	int count[10]={0},i;
// 	scanf("%s",num);
// 	for(i=0;i<strlen(num);i++)
// 	{
// 		switch(num[i])
// 		{
// 			case '0':count[0]++;break;
// 			case '1':count[1]++;break;
// 			case '2':count[2]++;break;
// 			case '3':count[3]++;break;
// 			case '4':count[4]++;break;
// 			case '5':count[5]++;break;
// 			case '6':count[6]++;break;
// 			case '7':count[7]++;break;
// 			case '8':count[8]++;break;
// 			case '9':count[9]++;break;
// 		}
// 	}
// 	for(i=0;i<10;i++)
// 	if(count[i]!=0)
// 	printf("%d:%d\n",i,count[i]);
// }
#include <stdio.h>
int main(){
    int i,ch;
    int cnt[10] = {0};
    while ((ch=getchar())!=EOF)
    {
        if (ch>='0'&&ch<='9')
            cnt[ch-'0']++;
    }
    for(i=0;i<10;i++)
    printf("%d : %d\n",i, cnt[i]);
    return 0;
}