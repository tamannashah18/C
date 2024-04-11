#include<stdio.h>

struct dob
{
	int date;
	int mon;
	int yr;
}b,t;
void main()
{
	int d,m,y;
	printf("Enter your birth date:");
	scanf("%d",&b.date);

	printf("Enter your birth month:");
	scanf("%d",&b.mon);

	printf("Enter your birth year:");
	scanf("%d",&b.yr);
	if(b.date<=31&&b.date>0&& b.mon<=12&&b.mon>0&&b.yr>0 )
	{
		printf("Enter current date:");
		scanf("%d",&t.date);
		printf("Enter current month:");
		scanf("%d",&t.mon);
		printf("Enter current year:");
		scanf("%d",&t.yr);
		if(t.date<=31&&t.date>0&& t.mon<=12&&t.mon>0&&t.yr>0 )
		{
			if(b.mon==2)
			{
				if(b.yr%4==0)
					d=(29-b.date)+t.date;
				else
					d=(28-b.date)+t.date;
			}
			else if(b.mon==4 ||b.mon==6 ||b.mon==9 ||b.mon==11)
				{d=(30-b.date)+t.date;}
			else
			{
				d=(31-b.date)+t.date;
			}
			if (d>=30)
			{
			m=(12-b.mon)+t.mon;
			d=d-31;
			}
			else
			{
				m=(12-b.mon)+t.mon;

			}

			if(b.yr>t.yr)
				printf("Invalid input");
			else
			{
				if(m>=12)
				{
					y=t.yr-b.yr;
					m-=12;
				}
				else
				{
					y=t.yr-b.yr-1;
				}
			}
			printf("Your age is %d years %d months %d days",y,m,d);
		}
		else
		{
			printf("Invalid input");

		}

	}
	else
	{
		printf("Invalid input");
	}
}
