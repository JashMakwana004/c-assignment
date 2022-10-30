#include<stdio.h>
#include<conio.h>
main()
{
	
	int a,b,answer;
	printf("Enter side a rectangle : ");
	scanf("%d",&a);
	
	printf("Enter side b of rectangle : ");
	scanf("%d",&b);
	
	answer = a * b;
	printf("\nArea of rectangle = %d",answer);
}