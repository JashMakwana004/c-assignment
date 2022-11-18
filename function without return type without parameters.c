#include<stdio.h>
void add();  //function declaration
main()
{
	add();  //function calling
}
void add()
{
	int a,b,ans;
	printf("enter A : ");
	scanf("%d",&a);
	printf("enter B : ");
	scanf("%d",&b);
	
	ans = a + b;
	printf("\naddition : %d",ans);
}