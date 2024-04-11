#include<stdio.h>
int prime();
void main()
{
	int n,res;
	printf("Enter no");
	scanf("%d",&n);
	if(n==0||n==1)
	{
		printf("%d is a special no",n);
	}
	else
	{
		res=prime(n);
		if(res==0)
		{
			printf("prime");
		}
		else
		{
			printf("Not prime");
		}
	}
}
int prime(int n)
{
	int i,cnt=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cnt++;
		}
	}
	if(cnt==2)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
