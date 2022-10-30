#include<stdio.h>
main()
{
	int n;
	printf("enter a number 1 to 7 : ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("\n sunday");
			break;
		
		case 2:
		    printf("\n monday");
			break;
			
		case 3:
			printf("\n tuesday");
			break;
		
		case 4:
			printf("\n wednesday");
			break;
		
		case 5:
			printf("\n thursday");
			break;
		
		case 6:
			printf("\n friday");
			break;
		
		case 7:
			printf("\n saturday");
			break;
			
		default:
			printf("\n Invalid input !!");
			break;	
	}
}