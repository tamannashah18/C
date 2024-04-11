#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number to check if it is an Armstrong no or not:");
	scanf("%d",&n);
	armstrong(n);
}
void armstrong(int n)
{
	int i,rem,sum=0,a=n;
	do{
		rem=n%10;
		sum+=(rem*rem*rem);
		n/=10;
	}while(n>0);
	if(a==sum)
	{
	printf("\n%d is an Armstrong no.",a);
	}
	else
	{
		printf("\n%d is not an Armstrong no.",a);

	}
}
