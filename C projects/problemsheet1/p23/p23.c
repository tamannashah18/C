#include<stdio.h>
void prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("\n%d is a prime no.",n);
	}
	else
	{
		printf("\n%d is not a prime no.",n);
	}
}
void main()
{
	int n;
	printf("Enter a number to check if it is a prime no or not:");
	scanf("%d",&n);
	prime(n);
}

