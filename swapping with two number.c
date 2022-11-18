#include<stdio.h>
#include<conio.h>
main()
{
	int a=10,b=20;
	a=a+b; //a=30
	b=a-b; //b=10
	a=a-b; //a=20
	printf("A is %d",a);
	printf("b is %d",b);
	getch();
}