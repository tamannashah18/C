#include<stdio.h>
#include<stdlib.h>

int prime(int a)
{
	int i,cnt=0;
	for(i=1;i<=a;i++)
		{
			if(a%i==0)
				cnt++;
		}
		if(cnt==2)
		{
			printf("%d IS A PRIME NO.",a);
		}
		else if(a==0 || a==1)
			{
				printf("%d IS A SPECIAL NO.",a);
			}
		else
		{
			printf("%d IS A COMPOSITE NO.",a);
		}
		return 0;
}
int main(int argc,char *argv[])
{
	int a;
	a=atoi(argv[1]);
	prime(a);
	return 0;
}
