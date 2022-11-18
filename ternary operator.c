#include<stdio.h>
main()
{
	int a,b,c;
	a=5;
	b=9;
	c=19;
	
	(a>b)?printf("\nA is greater number"):printf("\nB is greater number");
	(a>b)?((a>c)?printf("\nA is greater number"):printf("\nc is greater number")) :
		((b>c)?printf("\nb is greater number"):printf("\nc is greater number"));
}