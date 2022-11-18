#include<stdio.h>
main()
{
	char a,e,i,o,u;
	
	printf("enter a : ");
	scanf("%c",&a);
	
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		printf("\nvowel");
	}
	else
	{
		printf("\nconsonent");
	}
	

}