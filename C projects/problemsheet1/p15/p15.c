#include<stdio.h>
struct dates
{
	int date;
	int mon;
	int yr;
}d;
int date();
void main()
{
	int validity;
		printf("Enter date:");
		scanf("%d",&d.date);

		printf("Enter month:");
		scanf("%d",&d.mon);

		printf("Enter year:");
		scanf("%d",&d.yr);
		validity=date(d);
		if(validity==0)
		{
			printf("Valid Date");
		}
		else
		{
			printf("Invalid date");
		}
}
int date(struct dates d)
{
	if(d.date<=31 && d.date>0 && d.mon<=12 && d.mon>0 && d.yr>0 )
		{
					if(d.mon==2)
					{
						if(d.yr%4==0 && d.date>29)
						{
							printf("Invalid date");
						}
						else if(d.date>=29)
						{
							printf("Invalid date");
						}
						else
						{
							return 0;
						}
					}
					else if(d.mon==4 ||d.mon==6 ||d.mon==9 ||d.mon==11)
					{
						if(d.date>30)
						{
							printf("Invalid input");
						}
						else
						{
							return 0;
						}
					}
					else if(d.mon==1 ||d.mon==3 ||d.mon==5 ||d.mon==7||d.mon==8 ||d.mon==10 ||d.mon==12)
					{
						if(d.date>31)
						{
							printf("Invalid date");
						}
						else
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
		}
	else
	{
		return 1;
	}
}
