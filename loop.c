#include<stdio.h>
main()
{
    int i;
    do
    {
    	printf("\nenter a number : ");
    	scanf("%d",&i);
    	printf("\ni=%d",i);
    	
	}while(i!=0);
	printf("\n you entered zero");
}