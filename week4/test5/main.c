#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,N,*num,m=1,n=0,k=0;
	int A1=0,A2=0,A3=0,A5=0;
	float A4=0;
	scanf("%d",&N);
	num=(int*)malloc(N*(sizeof(int)));	
	for(i=0;i<N;i++)
		scanf("%d",&num[i]);
	for(i=0;i<N;i++)
	{	
		if(num[i]%5==0&&num[i]%2==0)
			A1+=num[i];
		if(num[i]%5==1)
		{
			A2+=m*num[i];
			m=-m;
		}
		else
			n++;
		if(num[i]%5==2)
			A3++;
		if(num[i]%5==3)
		{
			k++;
			A4+=num[i];
		}
		if(num[i]%5==4)
		{
			if(A5<num[i])
				A5=num[i];
		}
	}
    free(num);
	if(A1==0)
		printf("N ");
	else
		printf("%d ",A1);
	if(n==N)
		printf("N ");
	else
		printf("%d ",A2);
	printf("%d ",A3);
	if(k==0)
		printf("N ");
	else
		printf("%1.1f ",A4/k);
	if(A5==0)
		printf("N");
	else
		printf("%d",A5);
	
	return 0;
}
