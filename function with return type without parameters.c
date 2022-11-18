#include<stdio.h>
int add();
main()
{
	// int d;
	// d = add()
	// printf("\n addition : %d",d);
	printf("\nAddition : %d",add());
}
int add()
{
	int ans;
	int a,b;
	printf("enter a : ");
	scanf("%d",&a);
	printf("enter b : ");
	scanf("%d",&b);
	ans = a + b;
	return ans;
}