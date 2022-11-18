#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a : ");
	scanf("%d",&a);
	
	printf("enter b : ");
	scanf("%d",&b);
	
	printf("enter c : ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\na is largest number");
		}
		else
		{
			printf("\nc is largest number");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\nb is largest number");
		}
		else
		{
			printf("\nc is largest number");
		}
	}
}