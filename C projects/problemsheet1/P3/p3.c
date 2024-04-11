#include<stdio.h>
#include<string.h>
struct hotel
{
	char name[20];
	int grade;
	int charge;
	int room;
	struct add
	{
		char city[10];
		int pin;
	}add;
}temp;
void main()
{
	int i,n,size,j,ch;
	struct hotel h[n];
	printf("Enter the no of records");
	scanf("%d",&size);
	n=size;
	for(i=0;i<size;i++)
	{
		printf("HOTEL: %d\n",i+1);
		printf("HOTEL NAME:");
		scanf("%s",h[i].name);
		printf("HOTEL GRADE (IN NUMBERS 1-7)");
		scanf("%d",&h[i].grade);
		printf("NO OF ROOMS:");
		scanf("%d",&h[i].room);
		printf("AVERAGE ROOM CHARGE:");
		scanf("%d",&h[i].charge);
		printf("ENTER CITY");
		scanf("%s",h[i].add.city);
		printf("ENTER PIN");
		scanf("%d",&h[i].add.pin);

	}
	printf("\n RECORDS:\n");
	for(i=0;i<size;i++)
	{
			printf("\n\nHOTEL NAME:%s\n HOTEL GRADE:%d\n NO. OF ROOMS:%d\nAVERAGE ROOM CHARGE:%d\n",h[i].name,h[i].grade,h[i].room,h[i].charge);
			printf("CITY:%s \n PINCODE:%d\n\n\n",h[i].add.city,h[i].add.pin);
	}

			for(i=0;i<size;i++)
			{
				for(j=0;j<size-1;j++)
				{
					if(h[j].grade>h[j+1].grade)
					{
						temp=h[j];
						h[j]=h[j+1];
						h[j+1]=temp;
					}
				}
			}
			for(i=0;i<size;i++)
				{
					for(j=0;j<size-1-i;j++)
					{
						if(h[j].grade==h[j+1].grade)
						{
							if(h[j].charge>h[j+1].charge)
							{
								temp=h[j];
								h[j]=h[j+1];
								h[j+1]=temp;
							}
						}
					}
				}

			printf("SORTED DETAILS");

			for(i=0;i<size;i++)
			{
				printf("\n\nHOTEL NAME:%s\n HOTEL GRADE:%d\n NO. OF ROOMS:%d\nAVERAGE ROOM CHARGE:%d\n",h[i].name,h[i].grade,h[i].room,h[i].charge);
				printf("CITY:%s \n PINCODE:%d\n\n\n",h[i].add.city,h[i].add.pin);
			}
			printf("Enter charge limit for hotels:");
			scanf("%d",&ch);
			for(i=0;i<size;i++)
			{
				if(h[i].charge<ch)
				{
					printf("\n\nHOTEL NAME:%s\n HOTEL GRADE:%d\n NO. OF ROOMS:%d\nAVERAGE ROOM CHARGE:%d\n",h[i].name,h[i].grade,h[i].room,h[i].charge);
					printf("CITY:%s \n PINCODE:%d\n\n\n",h[i].add.city,h[i].add.pin);
				}
			}
}

