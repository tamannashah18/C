#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[2])
{
	FILE *f;
	int c=0,v=0;
	char a;
	f=fopen(argv[1],"r");
	while(!feof(f))
	{
		a=fgetc(f);
		if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='U'||a=='I'||a=='O')
		{
			v++;
		}
		else
		{
			c++;
		}
	}
	printf("THE NO OF VOWELS IS %d & CONSONANTS IS %d:",v,c);
	fclose(f);
}
