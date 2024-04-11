
#include<stdio.h>
int m,n,a[100],i,j,b[100],ch,temp,e;

void main()
{
	printf("Enter size of array 1");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				printf("Enter element %d:",i+1);
				scanf("%d",&a[i]);
			}
			printf("Enter size of array 2");
			scanf("%d",&m);
			for(i=0;i<m;i++)
			{
				printf("Enter element %d:",i+1);
				scanf("%d",&b[i]);
			}
	do{
	printf("Enter 1 for sorting both arrays\n Enter 2 for merging 2 arrays\n Enter 3 for sorting merged array");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
			sort(n,m,a,b);
			break;
	case 2:
			merge(n,m,a,b);
			break;
	case 3:
			merge_sort(n,m,a);
			break;
	default:
		printf("Invalid input");
		break;
	}
	printf("\nEnter 1 to continue and 0 to exit");
	scanf("%d",&e);
	}while(e==1);
}

void sort(int n,int m, int a[],int b[])
{

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<m;i++)
		{
			for(j=0;j<m-i-1;j++)
			{
				if(b[j]>b[j+1])
				{
					temp=b[j];
					b[j]=b[j+1];
					b[j+1]=temp;
				}
			}
		}
	printf("Sorted array 1:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nSorted array 2:\n");
		for(i=0;i<m;i++)
		{
			printf("%d ",b[i]);
		}

}
void merge(int n,int m,int a[],int b[])
{

	for(i=0;i<n+m;i++)
	{
		if(i>=n)
		{
			a[i]=b[j];
			j++;
		}
	}
	printf("\nMerged array :\n");
		for(i=0;i<n+m;i++)
		{
			printf("%d ",a[i]);
		}

}
void merge_sort(int n,int m,int a[])
{
	for(i=0;i<n+m;i++)
				{
					for(j=0;j<n+m-i-1;j++)
					{
						if(a[j]>a[j+1])
						{
							temp=a[j];
							a[j]=a[j+1];
							a[j+1]=temp;
						}
					}
				}
			printf("\nMerged & sorted array :\n");
					for(i=0;i<n+m;i++)
					{
						printf("%d ",a[i]);
					}
}
