
#include <stdio.h>

int main()
{
    int a = 5, b = 3, c = 4, d = 8, result, e;

    printf("Addition is: %d\n", sum(a, b)); 

    result = sum(c, d);
    e = sum(9,8);

    printf("Result: %d\n", result);
    printf("E: %d\n", e);

    return 0;
}

int sum(n1, n2)  
{
    int addition;
    addition = n1 + n2;
    return addition;
}
