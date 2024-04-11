#include<stdio.h>
struct time
{
	int hr,min,sec;
}t;
void input()
{
	printf("Enter hours(1-24)");
	scanf("%d",&t.hr);
	printf("Enter minutes(0-59):");
	scanf("%d",&t.min);
	printf("Enter seconds(0-59):");
	scanf("%d",&t.sec);
}
int validity()
{
	if(t.hr>0&&t.hr<12&&t.min>=0&&t.min<60&&t.sec>=0&&t.sec<60)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
void display()
{
	printf("HOURS:%d \nMINUTES:%d\nSECONDS:%d\n",t.hr,t.min,t.sec);
}

void main()
{
	printf("*Enter Time*\n");
	input();
	int valid;
	valid=validity();
	if(valid==0)
	{
		display();
		printf("is a valid time");
	}
	else
	{
		printf("Invalid time");
	}
}
