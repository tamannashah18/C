#include<stdio.h>
int digit();
void main()
{
	int n,res;
	printf("Enter no");
	scanf("%d",&n);
		res=digit(n);
		printf("sum of digits:%d",res);
}
int digit(int n)
{
	int rem,s,sum=0;
	do{
		rem=n%10;
		sum+=rem;
		n/=10;

	}while(n>0);
	return sum;
}
