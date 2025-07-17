#include <stdio.h>


int fact(int n);

int main() {
    int num, result;

    printf("Enter number:\t");
    scanf("%d", &num);

    result = fact(num);

    printf("Factorial of %d is: %d\n", num, result);

    return 0;
}


int fact(int n) {
    if(n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}