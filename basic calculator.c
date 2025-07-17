#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    return a / b;  
}

int main() {
    int x, y;
    printf("Enter first number:\t");
    scanf("%d", &x);
    printf("Enter second number:\t");
    scanf("%d", &y);

    printf("Addition: %d\n", add(x, y));
    printf("Subtraction: %d\n", sub(x, y));
    printf("Multiplication: %d\n", mul(x, y));
    printf("Division: %d\n", div(x, y));  

    return 0;
}