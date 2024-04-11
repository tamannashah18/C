#include<stdio.h>
int leap();
void main()
{
	int year,res;
	printf("Enter year");
	scanf("%d",&year);
	if(year<0)
	{
		printf("Invalid input");
	}
	else
	{
		res=leap(year);
		if(res==0)
		{
			printf("Leap year");
		}
		else
		{
			printf("Not a leap year");
		}
	}
}
int leap(int yr)
{
	if(yr%4==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
