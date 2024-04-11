#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int not=1,ch;
char pnr[20];
struct pass
{
	struct pi{
		char name[10];
		int age;
	}p[10];
	int des;
	int class;
}c;

void search()
{
	FILE *f;
		char a[20],n[20];
		printf("ENTER PASSANGER NAME:");
		scanf("%s",n);
		f=fopen("tickets.txt","r");
		while(fscanf(f,"%s",a)!=EOF)
		{
			if(strcmp(a,n)==0)
			{
				printf("\nNAME:%s",a);
				fscanf(f,"%s",a);
				printf("\nAGE:%s",a);
				fscanf(f,"%s",a);
				printf("\nPNR:%s",a);
				fscanf(f,"%s",a);
				printf("\nTRAIN NAME:%s",a);
				fscanf(f,"%s",a);
				printf("\nDEPT TIME:%s",a);
				fscanf(f,"%s",a);
				printf("\nARRIVAL TIME:%s",a);
				fscanf(f,"%s",a);
				printf("\nTICKET PRICE:%s",a);

			}
		}
		fclose(f);
}

void cancel()
{
	FILE *f,*t;
	int i,cnt=0,avt;
	char n[20],b[20],n1[20];
	f=fopen("tickets.txt","r");
	t=fopen("temp.txt","w");
	printf("Enter passenger name to delete its data");
	scanf("%s",n);
	while(fscanf(f,"%s",b)!=EOF)
	{
		if(strcmp(b,n)==0)
		{
			for(i=0;i<7;i++)
			{
				fscanf(f,"%s",b);
				if(i==1)
				{
					strcpy(pnr,b);
				}
			}
			cnt++;
			strcpy(b," ");
		}
		fprintf(t,"%s\n",b);
	}
	fclose(t);
	fclose(f);
	if(cnt==0)
	{
		printf("THERE EXISTS NO SUCH RECORDS");
	}
	else
	{
		f=fopen("tickets.txt","w");
		t=fopen("temp.txt","r");
		while(fscanf(t,"%s",b)!=EOF)
		{
				fprintf(f,"%s\n",b);
		}
		fclose(t);
		fclose(f);
	}
	seats();

}

void add(int avt,int cnt)
{
	FILE *f,*t;
	int i;
	char n[20],a[20],n1[20];
			f=fopen("trains.txt","r");
				t=fopen("temp.txt","w");
				while(fscanf(f,"%s",a)!=EOF)
				{
					fprintf(t,"%s\n",a);
						if(strcmp(a,pnr)==0)
						{
							for(i=0;i<6;i++)
							{
								fscanf(f,"%s",a);
								fprintf(t,"%s\n",a);

							}
							fscanf(f,"%s",a);
							avt=avt+cnt;
							sprintf(a,"%d",avt);
							fprintf(t,"%s\n",a);
							fscanf(f,"%s",a);
						}
				}
				printf("\nCANCELLATION SUCCESSFUL");

				fclose(f);
				fclose(t);
				f=fopen("trains.txt","w");
						t=fopen("temp.txt","r");
						while(fscanf(t,"%s",a)!=EOF)
						{
								fprintf(f,"%s\n",a);
						}
						fclose(t);
						fclose(f);
}
void update()
	{
		FILE *f,*t;
			int i,ch,cnt=0;
			char n[20],a[20],n1[20];
printf("ENTER 1 TO UPDATE NAME:\n ");
printf("ENTER 2 TO UPDATE AGE: \n");
scanf("%d",&ch);
			f=fopen("tickets.txt","r");
					t=fopen("temp.txt","w");
					if(ch==1)
					{
					printf("Enter your existing name:");
					scanf("%s",n);
					printf("Enter your updated name:");
					scanf("%s",n1);
					while(fscanf(f,"%s",a)!=EOF)
						{
							if(strcmp(a,n)==0)
							{

									fprintf(t,"%s\n",n1);
									fscanf(f,"%s",a);
									cnt++;
							}
							fprintf(t,"%s\n",a);
						}

					fclose(f);
					fclose(t);
if(cnt>0)
{

					f=fopen("tickets.txt","w");
					t=fopen("temp.txt","r");
					while(fscanf(t,"%s",a)!=EOF)
					{
						fprintf(f,"%s\n",a);
					}

					fclose(f);
					fclose(t);
					printf("SUCCESS IN UPDATING\n");
					}
else
{
	printf("NO SUCH DATA EXISTS\n");

}
					}
					else if(ch==2)
					{
						printf("Enter your existing name:");
											scanf("%s",n);
											printf("Enter your updated age:");
											scanf("%s",n1);
											while(fscanf(f,"%s",a)!=EOF)
												{
													if(strcmp(a,n)==0)
													{
															fprintf(t,"%s\n",a);
															fscanf(f,"%s",a);
															fprintf(t,"%s\n",n1);
															fscanf(f,"%s",a);
															cnt++;
													}
													fprintf(t,"%s\n",a);
												}

											fclose(f);
											fclose(t);
											fclose(t);
						if(cnt>0)
						{

											f=fopen("tickets.txt","w");
											t=fopen("temp.txt","r");
											while(fscanf(t,"%s",a)!=EOF)
											{
												fprintf(f,"%s\n",a);
											}

											fclose(f);
											fclose(t);
											printf("SUCCESS IN UPDATING\n");
											}
						else
						{
							printf("NO SUCH DATA EXISTS\n");

						}
					}
}
void seats()
{

	FILE *f,*t;
	int i,cnt=0,avt,pri;
	char a[20];
	f=fopen("trains.txt","r");
	while(fscanf(f,"%s",a)!=EOF)
			{
				if(strcmp(a,pnr)==0)
				{
					for(i=0;i<7;i++)
					{
						fscanf(f,"%s",a);
					}
					cnt++;
					avt=atoi(a);
				}
			}
	fclose(f);
	if(ch==1)
	{
		minus(cnt,avt);
	}
	else
	{
		add(avt,cnt);
	}
}
void minus(int cnt,int avt)
{

	FILE *f,*t;
	int i=0,pri;
	char a[20];
	if(cnt==0)
	{
		printf("No such data exists");
	}
	else
	{
		t=fopen("tickets.txt","a");
		printf("\nTICKET INFORMATION:\n");
for(i=0;i<not;i++)
{
	f=fopen("trains.txt","r");
		while(fscanf(f,"%s",a)!=EOF)
					{
						if(strcmp(a,pnr)==0)
						{
							fprintf(t,"\n%s",c.p[i].name);
							printf("\nNAME:%s",c.p[i].name);
							fprintf(t,"\n%d",c.p[i].age);
							printf("\nAGE:%d",c.p[i].age);
							fprintf(t,"\n%s",a);
							printf("\nPNR NO:%s",a);
							fscanf(f,"%s",a);
							fprintf(t,"\n%s",a);
							printf("\n TRAIN NAME:%s",a);
							fscanf(f,"%s",a);
							fprintf(t,"\n%s",a);
							printf("\nDEPARTURE TIME:%s",a);
							fscanf(f,"%s",a);
							fprintf(t,"\n%s",a);
							printf("\nARRIVAL TIME:%s",a);
							fscanf(f,"%d",&pri);
							if(c.class==1)
							{
								fprintf(t,"\n%d",pri);
								printf("\nPRICE:%d",pri);
								fscanf(f,"%d",&pri);
								fscanf(f,"%d",&pri);
							}
							else if(c.class==2)
							{
								fscanf(f,"%d",&pri);
								fprintf(t,"\n%d",pri);
								printf("\nPRICE:%d",pri);
								fscanf(f,"%d",&pri);
							}
							else
							{
								fscanf(f,"%d",&pri);
								fscanf(f,"%d",&pri);
								fprintf(t,"\n%d",pri);
								printf("\nPRICE:%d",pri);
							}
						}
					}
		fclose(f);

	}
		printf("\nBOOKING SUCCESSFUL");

			fclose(t);
			}
	f=fopen("trains.txt","r");
	t=fopen("temp.txt","w");
	while(fscanf(f,"%s",a)!=EOF)
	{
		fprintf(t,"%s\n",a);
			if(strcmp(a,pnr)==0)
			{
				for(i=0;i<6;i++)
				{
					fscanf(f,"%s",a);
					fprintf(t,"%s\n",a);

				}
				avt=avt-not;
				sprintf(a,"%d",avt);
				fprintf(t,"%s\n",a);
				fscanf(f,"%s",a);
			}


	}

	fclose(f);
	fclose(t);
	f=fopen("trains.txt","w");
			t=fopen("temp.txt","r");
			while(fscanf(t,"%s",a)!=EOF)
			{
					fprintf(f,"%s\n",a);
			}
			fclose(t);
			fclose(f);
	}
void main()
{
do{
	printf("\nEnter 1 to book\n");
	printf("Enter 2 to cancel\n");
	printf("Enter 3 to update\n");
	printf("Enter 4 to search your ticket information\n");
	printf("Enter 5 to exit\n");

	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		book();
		break;
	case 2:
		cancel();
		break;
	case 3:
		update();
		break;
	case 4:
		search();
		break;
	case 5:
		exit(0);
		break;

	}
}while(1);

}
void book()
{
	FILE *f,*t;
	int avt,cnt=0;
	char a[20],p[20];
	t=fopen("trains.txt","r");
	int i;
	printf("Enter no of passengers:");
	scanf("%d",&not);
	printf("Enter class:");
	scanf("%d",&c.class);
	printf("SELECT destination:\n");
	printf("Enter 1 for surat to mumbai\n");
	printf("Enter 2 for mumbai to baroda\n");
	printf("Enter 3 for jaipur to baroda\n");
	printf("Enter 4 for mumbai to delhi\n");
	scanf("%d",&c.des);
	printf("Enter personal details:");
	for(i=0;i<not;i++)
	{
		printf("PASSENGER %d",i+1);
		printf("NAME:");
		scanf("%s",c.p[i].name);
		printf("AGE:");
		scanf("%d",&c.p[i].age);
	}
	printf("THE TRAIN DETAILS:\n");
	while(fscanf(t,"%s",a)!=EOF)
			{
				if(c.des==1)
				{
				if((strcmp(a,"8866209157")==0 )|| (strcmp(a,"2145786394")==0)  )
				{
					strcpy(p,a);
					printf("\nPNR:%s",a);
					fscanf(t,"%s",a);
					printf("\nTRAIN NAME:%s",a);
					fscanf(t,"%s",a);
					printf("\nDEPT TIME:%s",a);
					fscanf(t,"%s",a);
					printf("\nARRIVAL TIME:%s",a);
					fscanf(t,"%s",a);
					if(c.class==1)
					{
						printf("\nPRICE:%s",a);
						fscanf(t,"%s",a);
						fscanf(t,"%s",a);
					}
					else if(c.class==2)
					{
						fscanf(t,"%s",a);
						printf("\nPRICE:%s",a);
						fscanf(t,"%s",a);

					}
					else
					{
						fscanf(t,"%s",a);
						fscanf(t,"%s",a);
						printf("\nPRICE:%s",a);
					}
					fscanf(t,"%d",&avt);
					printf("\nAvailable seats:%d",avt);
					if(not>avt)
					{
						printf("\nENOUGH TICKETS NOT AVAILABLE FOR THIS TRAIN\n");
						if(strcmp(p,"8866209157")==0)
							cnt=4;
						else
							cnt=9;
					}
					else
					{
						printf("\nENOUGH TICKETS AVAILABLE FOR THIS TRAIN\n");
						cnt++;
					}
				}
				}
				else if(c.des==2)
				{
					if(strcmp(a,"5854582134")==0)
					{
						printf("\nPNR:%s",a);
						fscanf(t,"%s",a);
						printf("\nTRAIN NAME:%s",a);
						fscanf(t,"%s",a);
						printf("\nDEPT TIME:%s",a);
						fscanf(t,"%s",a);
						printf("\nARRIVAL TIME:%s",a);
						fscanf(t,"%s",a);
						if(c.class==1)
						{
							printf("\nPRICE:%s",a);
							fscanf(t,"%s",a);
							fscanf(t,"%s",a);
						}
						else if(c.class==2)
						{
							fscanf(t,"%s",a);
							printf("\nPRICE:%s",a);
							fscanf(t,"%s",a);

						}
						else
						{
							fscanf(t,"%s",a);
							fscanf(t,"%s",a);
							printf("\nPRICE:%s",a);
						}
						fscanf(t,"%d",&avt);
						printf("\nAvailable seats:%d",avt);
						if(not>avt)
						{
							printf("\nENOUGH TICKETS NOT AVAILABLE FOR THIS TRAIN\n");
						}
						else
						{
							printf("\nENOUGH TICKETS AVAILABLE FOR THIS TRAIN\n");
							printf("ENTER THE PNR NO OF THE CHOSEN TRAIN:");
								scanf("%s",pnr);
								seats();
						}
					}
					}
					else if(c.des==3)
									{
										if(strcmp(a,"6586555412")==0)
										{
											printf("\nPNR:%s",a);
											fscanf(t,"%s",a);
											printf("\nTRAIN NAME:%s",a);
											fscanf(t,"%s",a);
											printf("\nDEPT TIME:%s",a);
											fscanf(t,"%s",a);
											printf("\nARRIVAL TIME:%s",a);
											fscanf(t,"%s",a);
											if(c.class==1)
											{
												printf("\nPRICE:%s",a);
												fscanf(t,"%s",a);
												fscanf(t,"%s",a);
											}
											else if(c.class==2)
											{
												fscanf(t,"%s",a);
												printf("\nPRICE:%s",a);
												fscanf(t,"%s",a);

											}
											else
											{
												fscanf(t,"%s",a);
												fscanf(t,"%s",a);
												printf("\nPRICE:%s",a);
											}
											fscanf(t,"%d",&avt);
											printf("\nAvailable seats:%d",avt);
											if(not>avt)
											{
												printf("\nENOUGH TICKETS NOT AVAILABLE FOR THIS TRAIN\n");
											}
											else
											{
												printf("\nENOUGH TICKETS AVAILABLE FOR THIS TRAIN\n");
												printf("ENTER THE PNR NO OF THE CHOSEN TRAIN:");
													scanf("%s",pnr);
													seats();
											}
										}
									}

					else if(c.des==4)
									{
										if(strcmp(a,"8866209157")==0)
										{
											printf("\nPNR:%s",a);
											fscanf(t,"%s",a);
											printf("\nTRAIN NAME:%s",a);
											fscanf(t,"%s",a);
											printf("\nDEPT TIME:%s",a);
											fscanf(t,"%s",a);
											printf("\nARRIVAL TIME:%s",a);
											fscanf(t,"%s",a);
											if(c.class==1)
											{
												printf("\nPRICE:%s",a);
												fscanf(t,"%s",a);
												fscanf(t,"%s",a);
											}
											else if(c.class==2)
											{
												fscanf(t,"%s",a);
												printf("\nPRICE:%s",a);
												fscanf(t,"%s",a);

											}
											else
											{
												fscanf(t,"%s",a);
												fscanf(t,"%s",a);
												printf("\nPRICE:%s",a);
											}
											fscanf(t,"%d",&avt);
											printf("\nAvailable seats:%d",avt);
											if(not>avt)
											{
												printf("\nENOUGH TICKETS NOT AVAILABLE FOR THIS TRAIN\n");
											}
											else
											{
												printf("\nENOUGH TICKETS AVAILABLE FOR THIS TRAIN\n");
												printf("ENTER THE PNR NO OF THE CHOSEN TRAIN:");
												scanf("%s",pnr);
												seats();
											}
										}
									}
			}
	if(cnt==2)
	{
		printf("ENTER THE PNR NO OF THE CHOSEN TRAIN:");
		scanf("%s",pnr);
		seats();
	}
	else
	{
		if(cnt>=9)
		{
			printf("ENTER 1 to book your tickets in the train with pnr:8866209157");
			scanf("%d",&cnt);
			if(cnt==1)
			{
			strcpy(pnr,"8866209157");
			seats();
			}
			else
			{
				printf("SORRY NO OTHER TRAIN IS AVAILABLE FOR BOOKING");
			}

		}
		else if(cnt>=4&&cnt<=9)
		{
			printf("ENTER 1 to book your tickets in the train with pnr:2145786394");
			scanf("%d",&cnt);
			if(cnt==1)
			{
			strcpy(pnr,"2145786394");
			seats();
			}
			else
			{
				printf("SORRY NO OTHER TRAIN IS AVAILABLE FOR BOOKING");
			}

		}

	}


	fclose(t);
	}


