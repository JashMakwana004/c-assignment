#include<stdio.h>
main()
{
	int a,b,c;
	
	a=5;
	b=1;
	c=2;
	
	(a>b)?printf("\na is the largest"):printf("\nb is the largest");
	
	(a>b)?((a>c)?printf("\na is the largest"):printf("\nc is the largest")):((b>c)?printf("\nb is the largest"):printf("\nc is the largest"));
}