
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[2])
{
	FILE *f,*t;
	char a[20];
	if(argc!=3)
	{
		printf("INCORRECT NUMBER OR ARGUMENTS");
	}
	else
	{
	f=fopen(argv[1],"r");
	t=fopen(argv[2],"w");
	while(!feof(f))
	{
		fscanf(f,"%s",a);
		fprintf(t,"%s\n",a);
	}
	fclose(f);
	fclose(t);
	}

}


