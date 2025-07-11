#include <stdio.h>

int main()
{
    int number, i = 1, table;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &number);

    printf("Multiplication table of %d is:\n", number);

    do {
        table = number * i;
        printf("%d x %d = %d\n", number, i, table);
        i++;
    } while(i <= 10);

    return 0;
}