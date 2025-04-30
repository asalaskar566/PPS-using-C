#include<stdio.h>
int main()
{
	int c,d,e;
	printf("Enter The Value of C :\t");
	scanf("%d",&c);
	printf("\nEnter The Value of D :\t");
	scanf("%d",&d);
	printf("\nInitially Value of C is :%d\n",c);
    printf("\nInitially Value of D is :%d\n",d);
    e=c;
    c=d;
    d=e;
    printf("\nInterchanged Value of C is : %d\n",c);
    printf("\nInterchanged Value of D is :%d",d);
    return 0;
}
	
