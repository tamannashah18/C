#include<stdio.h>
void main()
{
	int n,result=0,i;
	printf("Enter end no for fibonacci series");
	scanf("%d",&n);
	for(i=1;result<=n;i++)
	{

	printf("%d,",result);
	result=f(i);
	}
}
int f(int n)
{

	if(n==1)
	{
		return 1;
	}
	else
	{
		return f(n-1)+f(n-2);
	}
}
