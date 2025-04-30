#include<stdio.h>
int main()
{
	float diameter,radius,area,circumferance;
	printf("Enter The Diameter of Circle :\t");
	scanf("%f",&diameter);
	radius=diameter/2;
	area=3.14*radius*radius;
	circumferance=2*3.14*radius;
	printf("\nArea of Circle is %f\n",area);
	printf("\nCicumferance of Circle is %f",circumferance);
	return 0;
}
