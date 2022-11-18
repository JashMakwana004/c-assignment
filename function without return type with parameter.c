#include<stdio.h>
void add(int c , int d);
main()
{
	int a,b;
	printf("enter A : ");
	scanf("%d",&a);
	printf("enter B : ");
	scanf("%d",&b);
	add(a,b);  //call by reference
	add(9,7);  //call by value
}
void add(int c , int d)
{
	int ans;
	ans = c + d;
	printf("\nAddition : %d",ans);
}