
#include<stdio.h>
#include<stdlib.h>
int fact(int a)
{
	if(a==1)
	{
		return 1;
	}
	else if(a==0)
	{
		return 0;
	}
	else
	{
		return a*fact(a-1);
	}
}
int main(int argc,char *argv[2])
{
	int a,f;
	a=atoi(argv[1]);
	f=fact(a);
	printf("THE FACTORIAL OF %d is %d:",a,f);
}
