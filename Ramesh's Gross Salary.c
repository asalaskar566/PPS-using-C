#include<stdio.h>
int main()
{
	float bs,da,hr,gs;bs;
	printf("Enter Ramesh's Basic Salary :\t");
	scanf("%f",&bs);
	da=0.4*bs;
	hr=0.2*bs;
	gs=bs+da+hr;
	printf("\nGross Salary of Ramesh is %f",gs);
	return 0;
}
