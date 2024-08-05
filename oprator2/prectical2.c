#include<stdio.h>
#include<conio.h>

void main()
{

	int num;
	printf("enter num:");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("number is positive!");
	}
	else if(num==0)
	{
		printf("number is neutral!");
	}
	else
	{
		printf("number is nagative!");
	}
}
