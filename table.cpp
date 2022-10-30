#include<stdio.h>
main()
{
	int n,i;
	printf("\n enter a no. for table : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d * %d = %d",n,i,n*i);
	}
}