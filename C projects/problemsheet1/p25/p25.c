#include<stdio.h>
void pattern(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=n-i;k++)
		{
			printf("  ");
		}
		for(int j=1;j<=2*i-1;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
}
void main()
{
	int n;
	printf("Enter no of rows:");
	scanf("%d",&n);
	pattern(n);
}
