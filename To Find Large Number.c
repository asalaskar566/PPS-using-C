#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter First Number : ");
	scanf("%d",&num1);
	printf("\nEnter Second Number : ");
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("\nFirst Number is Greater %d",num1);
	}
	else if(num1==num2)
	{
		printf("\nBoth are Equal");
	}
	else
	{
		printf("\nSecond Number is Greater %d",num2);
	}
	return 0;
}
