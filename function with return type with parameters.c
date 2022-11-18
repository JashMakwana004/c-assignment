#include<stdio.h>
int add(int , int);
main()
{
	int a,b;
	printf("enter a : ");
	scanf("%d",&a);
	printf("enter b : ");
	scanf("%d",&b);
	printf("\naddition : %d",add(a,b));
}
int add(int a,int b)
{
	int ans;
	ans = a + b; 
	return ans;
}
