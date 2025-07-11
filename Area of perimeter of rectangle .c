#include<stdio.h>

int main()
{
    int length, width, perimeter, area;

    
    printf("Enter the length of rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of rectangle: ");
    scanf("%d", &width);

    
    area = length * width;

    perimeter = 2 * (length + width);

    
    printf("The area of rectangle :%d\n", area);
    printf("The perimeter of rectangle :%d\n", perimeter);

    return 0;
}