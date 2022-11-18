#include<stdio.h>
main()
{
	int age;
	printf("enter your age : ");
	scanf("%d",&age);
	
	if(age >= 18)
	{
		printf("\nyou are eligible for votting!!");
	}
	else
	{
		printf("\nsorry you are not eligible for voting");
	}
	
}