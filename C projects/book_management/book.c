#include<stdio.h>
#include<string.h>
int main()
{
	 int id[10], price[10],ch,e,i,j,temp2,temp3;
	 char name[10][10],auth[10][10],temp[100],temp1[100],n;

	printf("Enter element\n");
	for(i=0;i<10;i++)
	{
		printf("\nID:");
		scanf("%d",&id[i]);
		printf("\nAuthor name:");
		scanf("%s",auth[i]);
		printf("\nBook name:");
		scanf("%s",name[i]);
		printf("\nPrice:");
		scanf("%d",&price[i]);
	}
	do
	{
		printf("\n Enter 1 for displaying all records\n");
		printf("\n Enter 2 for displaying sorted records on the basis of author name\n");
		printf("\n Enter 3 for displaying books whose price>2000 all records\n");
		printf("\n Enter 4 for displaying details whose author name starts from 'e' \n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			//display
			for(i=0;i<10;i++)
			{
				printf("\nSr.No%d",i+1);
				printf("\nID:%d",id[i]);
				printf("\nAuthor name:%s",auth[i]);
				printf("\nBook name:%s",name[i]);
				printf("\nPrice:%d",price[i]);
			}
			break;
		case 2:
			//auth sort
			for(i=0;i<9;i++)
			{
				for(j=0;j<9-i;j++)
				{
					if(strcmp(auth[j],auth[j+1])<0)
					{
						strcpy(temp,auth[j]);
						strcpy(auth[j],auth[j+1]);
						strcpy(auth[j+1],temp);

						strcpy(temp1,name[j]);
						strcpy(name[j],name[j+1]);
						strcpy(name[j+1],temp1);

						temp2=id[j];
						id[j]=id[j+1];
						id[j+1]=temp2;

						temp3=price[j];
						price[j]=price[j+1];
						price[j+1]=temp3;
					}
				}
			}
			//display sorted details
			for(i=0;i<10;i++)
						{
							printf("\nID:%d",id[i]);
							printf("\nAuthor name:%s",auth[i]);
							printf("\nBook name:%s",name[i]);
							printf("\nPrice:%d",price[i]);
						}
				break;
		case 3:
			//price>2000
			for(i=0;i<10;i++)
						{
							if(price[i]>2000)
							{
								printf("\nID:%d",id[i]);
								printf("\nAuthor name:%s",auth[i]);
								printf("\nBook name:%s",name[i]);
								printf("\nPrice:%d",price[i]);
							}
						}
				break;
		case 4:
			//auth e
			for(i=0;i<10;i++)
			{
				n=auth[i][0];
				if(n=='e'||n=='E')
				{
					printf("\nID:%d",id[i]);
					printf("\nAuthor name:%s",auth[i]);
					printf("\nBook name:%s",name[i]);
					printf("\nPrice:%d",price[i]);
				}
			}
			break;
		default:
			printf("Invalid Input");
				break;
		}
		printf("\nEnter 1 to continue\n Enter 0 to quit ");
		scanf("%d",&e);
	}while(e==1);
}
