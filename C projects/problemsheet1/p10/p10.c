#include<stdio.h>
void main()
{
	int n,i,size,arr[n];
	printf("Enter size of the array:");
	scanf("%d",&size);
	n=size;
	for(i=0;i<n;i++)
	{
		printf("Enter element");
		scanf("%d",&arr[i]);
	}

	printf("\nArray is :\n");
	for(i=0;i<n;i++)
		{
			printf("%d,",arr[i]);
		}
	asc(arr,n);
	desc(arr,n);
}
void asc(int arr[],int size)
{
	int i,l,k;
	for(k=0;k<size;k++)
	{
		for(i=0;i<size-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				l=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=l;
			}
		}
	}
	printf("\n Sorted array in ascending is :\n");
		for(i=0;i<size;i++)
			{
				printf("%d,",arr[i]);
			}
}
void desc(int arr[],int size)
{
	int i,l,k;
	for(k=0;k<size;k++)
	{
		for(i=0;i<size-1;i++)
		{
			if(arr[i]<arr[i+1])
			{
				l=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=l;
			}
		}
	}
	printf("\n Sorted array in descending is :\n");
		for(i=0;i<size;i++)
			{
				printf("%d,",arr[i]);
			}
}

