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
	largest(arr,n);
}
int largest(int arr[],int size)
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
	printf("\nLargest element of the given array is:%d",arr[size-1]);
	printf("\nSmallest element of the given array is:%d",arr[0]);

	return 0;
}
