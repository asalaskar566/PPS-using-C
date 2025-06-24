
#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4, b = 2;
    double sq, power;

    power = pow(a, b);
    sq = sqrt(a);

    printf("square of %d is %.0f\n", a, power);
    printf("square root of %d is %.0f\n", a, sq);

    return 0;
}