#include<stdio.h>
int main()
{
	int num1,num2,num3,sum;
	printf("Enter First Number :\t");
	scanf("%d",&num1);
	printf("Enter second Number :\t");
    scanf("%d",&num2);
    printf("Enter Third Number :\t");
    scanf("%d",&num3);
    sum=num1+num2+num3;
    printf("Sum of %d,%d and %d is %d",num1,num2,num3,sum);
    return 0;
}
