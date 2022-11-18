#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[10]="tops";
	char b[10]="tops";
	int c;
	c=strcmp(a,b);
	if(strcmp(a,b)==0)
	{
		printf("same");	
	}
	else
	{
	    printf("diff");
	}
	return 0;
}