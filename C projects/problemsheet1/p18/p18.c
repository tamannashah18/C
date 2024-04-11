#include<stdio.h>
void countprime(int r, int c,int a[10][10])
{
	int i,j,k,count=0,p=0;
	printf("The given array is :\n");
	for(i=0;i<r;i++)
			{
			printf("\n");
				for(j=0;j<c;j++)
				{
					printf("%d\t",a[i][j]);
				}
			}
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				count=0;

				for(k=1;k<=a[i][j];k++)
				{
					if(a[i][j]%k==0)
					{
						count++;
					}
				}
				if(count==2)
				{
					p++;
				}
			}

		}

	printf("\n The no of prime nos. in the given array is %d",p);


}
void main()
{
	int a[10][10],r,c,i,j;
	printf("Enter no of rows:");
	scanf("%d",&r);
	printf("Enter no of columns:");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter Element (%d , %d):",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}

	countprime(r,c,a);
}
