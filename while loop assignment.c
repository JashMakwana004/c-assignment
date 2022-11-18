#include<stdio.h>
main()
{
	int i;
	printf("\n enter a number : ");
	scanf("%d",&i);
	
	while(i!=0)
	{
		printf("\ni = %d",i);
		printf("\nenter a number : ");
		scanf("%d",&i);
	}
	printf("\n you enter a zero");
}