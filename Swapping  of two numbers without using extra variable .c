#include<stdio.h>
int main()
{
	int c,d;
	printf("Enter The Value of C :\t");
	scanf("%d",&c);
	printf("\nEnter The Value of D :\t");
	scanf("%d",&d);
	c=c+d;
	d=c-d;
	c=c-d;
	printf("\nAfter Swapping C is %d and D is %d",c,d);
	return 0;
}
