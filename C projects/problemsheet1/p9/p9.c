#include<stdio.h>
int fact();
int main()
{
	int n,result;
	printf("Enter no to find its factorial");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("Invalid input ");
	}
	else
	{
		result=fact(n);
		printf("%d",result);
	}
	return 0;
}
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else if(n==0)
	{
		return 0;
	}
	else
	{
		return n*fact(n-1);
	}
}
