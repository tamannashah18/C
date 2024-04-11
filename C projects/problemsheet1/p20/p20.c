#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number to calculate the sum of its digits:");
	scanf("%d",&n);
	digit(n);
}
void digit(int n)
{
	int i,rem,sum=0;
	do{
		rem=n%10;
		sum+=rem;
		n/=10;
	}while(n>0);
	printf("\n%d is the sum of the digits.",sum);
}
