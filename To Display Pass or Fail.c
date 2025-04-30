#include<stdio.h>
int main()
{
	int marks;
	printf("Enter Marks : ");
	scanf("%d",&marks);
	if(marks>=40)
	{
		printf("\nPass");
	}
	else
	{
		printf("\nFail");
	}
	return 0;
}
