#include<stdio.h>
main()
{
	int num;
	printf("enter any number : ");
	scanf("%d",&num);
	
	if(num%2 == 0)
	{
		printf("\neven number");
    }
    
    else
    {
    	printf("\nodd number");
	}
}