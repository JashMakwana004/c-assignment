#include<stdio.h>
main()
{
	int r;
	float pi=3.14,ans;
	printf("Enter radius of circle : ");
	scanf("%d",&r);
	
	ans = pi * r * r;
	printf("\nArea of the circle = %f approx",ans);
}