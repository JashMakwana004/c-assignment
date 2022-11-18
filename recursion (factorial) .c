#include<stdio.h>
int factorial(n)
{
	int i , fact = 1;
	if(n == 1)
	{
		return 1;
	}
	else
	{
		fact = n * factorial(n-1);
	}
	return fact;
}
main()
{
	int n;
	printf("enter number to find : ");
	scanf("%d",&n);
	printf("\nfactorial : %d",factorial(n));
}