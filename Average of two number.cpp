#include<stdio.h>
int main()
{
	int num1,num2,avg;
	printf("Enter First Number :");
	scanf("%d",&num1);
	printf("\nEnter Second Number :");
	scanf("%d",&num2);
	avg =( num1+num2)/2;
	printf("\nAverage of %d and %d id %d",num1,num2,avg);
	return 0;
}

