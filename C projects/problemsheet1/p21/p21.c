#include<stdio.h>
void main()
{
	int n,m,i,j,arr[10][10];
		printf("Enter size of the array:");
		scanf("%d",&n);
		printf("Enter size of the array:");
		scanf("%d",&m);

		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("Enter element");
				scanf("%d",&arr[i][j]);
			}
		}

		printf("\nArray is :\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
	sum(n,m,arr);
}
int sum(int n, int m,int arr[10][10])
{
	int i,j,sum=0;

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		sum+=arr[i][j];
		}
	}
	printf("\nSum of all nos is:%d",sum);
	return 0;
}