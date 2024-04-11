#include<stdio.h>
#include<string.h>
struct census
{
	char city[20];
	double pop;
	double lit;
}rec[10],temp1;
void main()
{
	int i,ch,e;
	for(i=0;i<10;i++)
	{
		printf("\nRecord %d:\n",i+1);
		printf("CITY NAME:\n");
		scanf("%s",rec[i].city);
		printf("POPULATION:\n");
		scanf("%lf",&rec[i].pop);
		printf("LITERACY RATE:\n");
		scanf("%lf",&rec[i].lit);
	}
	do
	{
		printf("\n Enter 1 for displaying all records\n");
		printf("\n Enter 2 for displaying sorted records on the basis of city name\n");
		printf("\n Enter 3 for displaying sorted records on the basis of population\n");
		printf("\n Enter 4 for displaying sorted records on the basis of literacy rate\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			for(i=0;i<10;i++)
			{
				printf("CITY : %s \nPOPULATION:%lf\nLITERACY%lf\n",rec[i].city,rec[i].pop,rec[i].lit);
			}
			break;
			case 2:
				for(i=0;i<10;i++)
				{
					for(int j=0;j<9;j++)
					{
						if(strcmp(rec[j].city,rec[j+1].city)>0)
						{
							temp1=rec[j];
							rec[j]=rec[j+1];
							rec[j+1]=temp1;
						}
					}
				}
				printf("SORTED RECORDS(on the basis of city name)\n");

				for(i=0;i<10;i++)
				{
						printf("CITY : %s \nPOPULATION:%lf\nLITERACY:%lf\n",rec[i].city,rec[i].pop,rec[i].lit);
				}
				break;
			case 4:
				for(i=0;i<10;i++)
				{
					for(int j=0;j<9;j++)
					{
						if(rec[j].lit>rec[j+1].lit)
						{
							temp1=rec[j];
							rec[j]=rec[j+1];
							rec[j+1]=temp1;
						}
					}
				}
				printf("SORTED RECORDS(on the basis of literacy)\n");
				for(i=0;i<10;i++)
				{
					printf("CITY : %s \nPOPULATION:%lf\nLITERACY:%lf\n\n\n",rec[i].city,rec[i].pop,rec[i].lit);
				}
				break;
			case 3:
				for(i=0;i<10;i++)
				{
					for(int j=0;j<9;j++)
					{
						if(rec[j].pop>rec[j+1].pop)
						{
							temp1=rec[j];
							rec[j]=rec[j+1];
							rec[j+1]=temp1;
						}
					}
				}
				printf("SORTED RECORDS(on the basis of population)\n");
				for(i=0;i<10;i++)
				{
					printf("CITY : %s \nPOPULATION:%lf\nLITERACY:%lf\n\n\n",rec[i].city,rec[i].pop,rec[i].lit);
				}
				break;
			default:
				printf("Invalid input");
				break;
		}
		printf("\nEnter 1 to continue\n Enter 0 to quit ");
		scanf("%d",&e);
	}while(e==1);
}
