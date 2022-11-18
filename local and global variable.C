#include<stdio.h>
#include<conio.h>
int a=15; //global
main()
{
	int a=10; //local
	printf("%d",a);
	printf("%d",::a);
	getch();
}
