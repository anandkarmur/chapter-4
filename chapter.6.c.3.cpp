#include<stdio.h>

main()
{
	int a;
	
	printf("enter the value a=");
	scanf("%d",&a);
	
	if(a==0)
	{
		printf("This number is neutral");
	}
	else if(a>0)
	{
		printf("This number is positive");
	}
	else if(a<0)
	{
		printf("This number is negative");
	}
	
}