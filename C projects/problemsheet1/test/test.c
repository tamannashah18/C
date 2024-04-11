#include<stdio.h>
int main()
{
	int n,m,i,j,r,c,arr[r][c];
	printf("enter the values rows");
	scanf("%d",&n);
	printf("enter the values rows");
		scanf("%d",&m);
		r=n;
		c=m;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter:");
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d element:%d",j+1,arr[i][j]);

			}
		}
	return 0;
}
