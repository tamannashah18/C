#include<stdio.h>
void asc();
void desc();
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
			printf("%d,",arr[i][j]);
		}
		printf("\n");
	}
	asc(n,m,arr);
	desc(n,m,arr);
}
void asc(int n,int m,int arr[10][10])
{
	int i,j,r,l,c;
	for(r=0;r<n;r++)
	{
		for(c=0;c<m;c++)
		{
			for(i=0;i<n-1;i++)
			{
				for(j=0;j<m-i-1;j++)
				{
					if(arr[r][c]>arr[i][j])
					{
						l=arr[r][c];
						arr[i][j]=arr[r][c];
						arr[r][c]=l;
					}
				}
			}
		}


	printf("\n Sorted array in ascending is :\n");
		for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					printf("%d,",arr[i][j]);
				}
				printf("\n");
			}
}
void desc(int n,int m,int arr[10][10])
{
	int i,l,r,c,j;
	for(r=0;r<n;r++)
		{
			for(c=0;c<m;c++)
			{
				for(i=0;i<n-1;i++)
				{
					for(j=0;j<m-i-1;j++)
					{
						if(arr[r][c]<arr[i][j])
						{
							l=arr[r][c];
							arr[i][j]=arr[r][c];
							arr[r][c]=l;
						}
					}
				}
			}
		}


	printf("\n Sorted array in descending is :\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d,",arr[i][j]);
			}
			printf("\n");
		}
}

