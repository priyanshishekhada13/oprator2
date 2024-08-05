#include<stdio.h>
#include<conio.h>

void main()
{

	float maths ,english, science ,avg,total ;
	printf("enter maths mark:");
	scanf("%f",&maths);
	printf("enter english mark:");
	scanf("%f",&english);
	printf("enter science mark:");
	scanf("%f",&science);
	total=maths+english+science;
	avg=total/3;
	printf("avg marks is:%.2f",avg);
	
	if(avg>=90 && avg<=100)
	{
		printf(" a+ !");
	}
	else if(avg>=80 && avg<=89)
	{
		printf(" a !");
	}
	else if(avg>=70 && avg<=79)
	{
		printf(" b+ !");
	}
	else if(avg>=60 && avg<=69)
	{
		printf(" b !");
	}
	else if(avg>=50 && avg<=59)
	{
		printf(" c !");
	}
	else if(avg>=40 && avg<=49)
	{
		printf(" d !");
	}
	else if(33>=avg && avg<=39)
	{
		printf(" e !");
	}
	else if(avg<=33)
	{
		printf(" yor are fail !");
	}
	
	
}
