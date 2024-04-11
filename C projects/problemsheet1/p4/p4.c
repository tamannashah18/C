#include<stdio.h>
#include<string.h>
struct library
{
	char name[20];
	char aut[20];
	int no;
	int price;
	int flag;
}temp;
void main()
{
	int i,n,size,j,c=0,ch,e;
	char str[20];
	struct library l[n];
	printf("Enter the no of records");
	scanf("%d",&size);
	n=size;
	for(i=0;i<size;i++)
	{
		printf("BOOK: %d\n",i+1);
		printf("BOOK NAME:");
		scanf("%s",l[i].name);
		printf("AUTHOR NAME:");
		scanf("%s",l[i].aut);
		printf("BOOK PRICE");
		scanf("%d",&l[i].price);
		printf("ACCESSION NO:");
		scanf("%d",&l[i].no);
		printf("ENTER 1 IF THE BOOK IS ISSUED ELSE ENTER 0:");
		scanf("%d",&l[i].flag);
	}
	do
	{
	printf("Enter 1 to display all the records\n");
	printf("Enter 2 to display all the records of a given author\n");
	printf("Enter 3 to display all the records of a given title\n");
	printf("Enter 4 to display total no of records\n");
	printf("Enter 5 to display all the records in order of accession no\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("\n RECORDS:\n");
	for(i=0;i<size;i++)
	{
			printf("\nBOOK NAME:%s\nAUTHOR NAME:%s\nBOOK PRICE:%d\n ACCESSION NO. :%d\n",l[i].name,l[i].aut,l[i].price,l[i].no);
			if(l[i].flag==0)
			{
				printf("BOOK IS NOT ISSUED");
			}
			else if(l[i].flag==1)
			{
				printf("BOOK IS ISSUED");
			}
			else
			{
				printf("Invalid Input");
				c++;
				exit(1);
			}
	}
	break;
	case 2:
		printf("Enter author name you want to search:");
		scanf("%s",str);
		for(i=0;i<size;i++)
		{
			if(strcmp(l[i].aut,str)==0)
			{
				printf("\nBOOK NAME:%s\nAUTHOR NAME:%s\nBOOK PRICE:%d\n ACCESSION NO. :%d\n",l[i].name,l[i].aut,l[i].price,l[i].no);
				if(l[i].flag==0)
				{
					printf("BOOK IS NOT ISSUED");
				}
				else
				{
					printf("BOOK IS ISSUED");
				}
			}
		}
		break;
	case 3:
			printf("Enter book name you want to search:");
			scanf("%s",str);
			for(i=0;i<size;i++)
			{
				if(strcmp(l[i].name,str)==0)
				{
					printf("\nBOOK NAME:%s\nAUTHOR NAME:%s\nBOOK PRICE:%d\n ACCESSION NO. :%d\n",l[i].name,l[i].aut,l[i].price,l[i].no);
					if(l[i].flag==0)
					{
						printf("BOOK IS NOT ISSUED");
					}
					else
					{
						printf("BOOK IS ISSUED");
					}
				}
			}
			break;
	case 4:
		printf("The total no of entered records id %d",n);
		break;
	case 5:
		for(i=0;i<size;i++)
		{
			for(j=0;j<size-1;j++)
			{
				if(l[j].no>l[j+1].no)
				{
					temp=l[j];
					l[j]=l[j+1];
					l[j+1]=temp;
				}
			}
		}
		printf("SORTED DETAILS");

		for(i=0;i<size;i++)
		{
			printf("\nBOOK NAME:%s\nAUTHOR NAME:%s\nBOOK PRICE:%d\n ACCESSION NO. :%d\n",l[i].name,l[i].aut,l[i].price,l[i].no);
			if(l[i].flag==0)
			{
				printf("BOOK IS NOT ISSUED");
			}
			else
			{
				printf("BOOK IS ISSUED");
			}
		}
			break;
	}
printf("Enter 1 to continue and 0 to exit");
scanf("%d",&e);
	}while(e==1);
}

