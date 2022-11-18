#include<stdio.h>
main()
{
	int ans,count=0;
	printf("\n\n\t\t Welcome to KBC!");
	
	que1:
	printf("\n\nQue 1. What is 2+2 ?");
	printf("\n1. 5 \t2. 7\n3 4 \t4. 10");
	scanf("%d",&ans);
	
	if(ans == 3)
	{
		goto que2;
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		count++;
		if(count == 3)
		{
			goto GO;
		}
		printf("\nTRY AGAIN");
		goto que1;
	}
	
	que2:
		printf("\nwe are at que 2.");
		printf("\n\nQue 2. What is 2-1 ?");
	    printf("\n1. 1 \t2. 2\n3 3 \t4. 4");
	    scanf("%d",&ans);
	if(ans == 1)
	{
		goto que3;
	}
	else
	{
		printf("\nwrong answer!!");
		count++;
		if(count == 3)
		{
			goto GO;
		}
		printf("\ntry again");
		goto que2;
	}
	que3:
		printf("\nwe are at que 2.");
		printf("\n\nQue 3. What is 2+1 ?");
	    printf("\n1. 1 \t2. 2\n3 3 \t4. 4");
	    scanf("%d",&ans);
	if(ans == 3)
	{
		goto GO;
	}
	else
	{
		printf("\nwrong answer!!");
		count++;
		if(count == 3)
		{
			goto GO;
		}
		printf("\ntry again");
		goto que3;
	}		    
		GO:
		printf("\nGAME OVER!");
		
}