
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[2])
{
	FILE *f;
	char a[20];
	f=fopen(argv[1],"r");
	while(!feof(f))
	{
		fscanf(f,"%s",a);
		printf("%s\n",a);
	}
	fclose(f);
}


