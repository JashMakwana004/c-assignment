#include<stdio.h>
main()
{
	int a,b,c,d,e,ans,percentage;
	
	printf("enter a : ");
	scanf("%d",&a);
	
	printf("enter b : ");
	scanf("%d",&b);
	
	printf("enter c : ");
	scanf("%d",&c);
	
	printf("enter d : ");
	scanf("%d",&d);
	
	printf("enter e : ");
	scanf("%d",&e);
	
	ans = a + b + c + d + e;
	printf("\ntotal marks = %d",ans);
	
	percentage = ans/5;
	printf("\ntotal marks = %d",percentage);
	
	if(percentage>75)
	{
		printf("\ndistinction");
	}
	else if(percentage>60)
	{
		printf("\nfirst class");
	}
	else if(percentage>50)
	{
		printf("\nsecond class");
	}
	else if(percentage>35)
	{
		printf("\npass class");
	}
	else
	{
		printf("\nfail!!");
	}
}