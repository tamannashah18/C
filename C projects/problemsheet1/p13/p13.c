void main()
{
	int n,m,i,j,arr[10][10];
	printf("Enter rows of the array:");
	scanf("%d",&n);
	printf("Enter columns of the array:");
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
	small(n,m,arr);
	large(n,m,arr);
}
void small(int n, int m,int arr[10][10])
{
	int min,i,j;
	min=arr[0][0];
	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(arr[i][j]<min)
					min=arr[i][j];
			}

		}
	printf("\n%d is the smallest element",min);
}
void large(int n, int m,int arr[10][10])
{
	int max,i,j;
	max=arr[0][0];
	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(arr[i][j]>max)
					max=arr[i][j];
			}

		}
	printf("\n%d is the largest element",max);


}
