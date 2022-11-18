#include<stdio.h>
main()
{
	int a,b,ans;
	char n;
	printf("enter a : ");
	scanf("%d",&a);
	printf("enter b : ");
	scanf("%d",&b);
	printf("\nselect the operation to perform : \n\n");
	printf("+.addition \n-substraction \n*multiplication \n/division");
	fflush(stdin);
	scanf("%c",&n);
	
	switch(n)
	{
		case'+':
			ans=a+b;
			printf("\naddition = %d",ans);
			break;
		
		case'-':
			printf("\nsubstraction = %d",a-b);
			break;
		
		case'*':
			printf("\nmulti = %d",a*b);
			break;
		
		case'/':
			printf("\ndiv = %d",a/b);
			break;
		
		default:
			printf("\nInvalid inputs !!");
			break;
			
	}
	
}