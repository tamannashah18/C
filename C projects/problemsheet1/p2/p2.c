#include<stdio.h>
#include<string.h>
struct cricket
{
	char name[20];
	char tn[20];
	float avg;
}temp1,players[20];
void main()
{
	int i;
	for(i=0;i<20;i++)
		{
			printf("\nPlayer %d:\n",i+1);
			printf("PLAYER NAME:\n");
			scanf("%s",players[i].name);
			printf("TEAM NAME:\n");
			scanf("%s",players[i].tn);
			printf("BATTING AVERAGE:\n");
			scanf("%f",&players[i].avg);
		}
	for(i=0;i<20;i++)
					{
						for(int j=0;j<19;j++)
						{
							if(strcmp(players[j].tn,players[j+1].tn)>0)
							{
								temp1=players[j];
								players[j]=players[j+1];
								players[j+1]=temp1;
							}
						}
					}
					printf("SORTED RECORDS(on the basis of team name)\n\n");

					for(i=0;i<20;i++)
					{
							printf("TEAM NAME:%s\nNAME : %s \nBATTING AVERAGE:%f\n\n",players[i].tn,players[i].name,players[i].avg);
					}
}
