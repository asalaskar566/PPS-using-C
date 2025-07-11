

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("First number is greater: %d\n", num1);
    }
    else if (num1 == num2)
    {
        printf("Both numbers are equal\n");
    }
    else
    {
        printf("Second number is greater: %d\n", num2);
    }

    return 0;
}
