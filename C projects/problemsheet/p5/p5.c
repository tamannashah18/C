#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[11])
{
	int a[10],i,j,temp;
	if(argc!=11)
		printf("THE %d ARGUEMENTS IS LESS",argc);
	else
	{
	for(i=0;i<10;i++)
		{
			a[i]=atoi(argv[i+1]);
		}
	for(i=0;i<10;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=a[i];
			}
		}
	}
	printf("\nTHE SORTED LIST IS:\n");
	for(i=0;i<10;i++)
			{
				printf("%d\n",a[i]);
			}
	}
	return 0;

}