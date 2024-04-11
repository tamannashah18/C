#include<stdio.h>
int arm();
void main()
{
	int n,res;
	printf("Enter no");
	scanf("%d",&n);
		res=arm(n);
		if(res==0)
		{
			printf("ARMSTRONG NO.");
		}
		else
		{
			printf("NOT ARMSTRONG NO.");
		}}
int arm(int n)
{
	int rem,s,sum=0;
	s=n;
	do{
		rem=n%10;
		sum+=rem*rem*rem;
		n/=10;

	}while(n>0);
	if(s==sum)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
