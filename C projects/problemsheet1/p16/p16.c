
#include<stdio.h>
struct dates
{
	int date;
	int mon;
	int yr;
}d1,d2;
int date();
int equal();
int main()
{
	int equality, valid;
		printf("Enter date:");
		scanf("%d",&d1.date);

		printf("Enter month:");
		scanf("%d",&d1.mon);

		printf("Enter year:");
		scanf("%d",&d1.yr);
		printf("Enter date:");
		scanf("%d",&d2.date);

		printf("Enter month:");
		scanf("%d",&d2.mon);

		printf("Enter year:");
		scanf("%d",&d2.yr);
		valid=date();
		if(valid==0)
		{
			equality=equal();
			if(equality==0)
			{
				printf("Equal Date");
			}
			else
			{
				printf("Unequal date");
			}
		}
		else
		{
			printf("Invalid date");
		}
		return 0;
}
int date()
{
	if(d1.date<=31 && d1.date>0 && d1.mon<=12 && d1.mon>0 && d1.yr>0 && d2.date<=31 && d2.date>0 && d2.mon<=12 && d2.mon>0 && d2.yr>0 )
		{
					if(d1.mon==2 || d2.mon==2)
					{
						if((d1.yr%4==0 && d1.date>29)|| (d2.yr%4==0 && d2.date>29))
						{
							printf("Invalid date");
						}
						else if(d1.date>=29)
						{
							printf("Invalid date");
						}
						else
						{
							return 0;
						}
					}
					else if(d1.mon==4 ||d1.mon==6 ||d1.mon==9 ||d1.mon==11||d2.mon==4 ||d2.mon==6 ||d2.mon==9 ||d2.mon==11)
					{
						if(d1.date>30 ||d2.date>30 )
						{
							printf("Invalid input");
						}
						else
						{
							return 0;
						}
					}
					else if(d1.mon==1 ||d1.mon==3 ||d1.mon==5 ||d1.mon==7||d1.mon==8 ||d1.mon==10 ||d1.mon==12||d2.mon==1 ||d2.mon==3 ||d2.mon==5 ||d2.mon==7||d2.mon==8 ||d2.mon==10 ||d2.mon==12)
					{
						if(d1.date>31||d2.date>31)
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
int equal()
{
	if(d1.date==d2.date && d1.mon==d2.mon && d1.yr==d2.yr)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
