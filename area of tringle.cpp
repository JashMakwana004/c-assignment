#include<stdio.h>
main()
{
	int a,h;
	float b=0.5,ans;
	
	printf("Enter length of altitude : ");
	scanf("%d",&a);
	
	printf("Enter length of base : ");
	scanf("%d",&h);
	
	ans = b * a * h;
	printf("\nArea of triangle = %f",ans);
	
}