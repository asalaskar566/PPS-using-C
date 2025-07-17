#include <stdio.h>

int main() {
    int i, j, s, a = 1;

    for (i = 1; i <= 4; i++) {
        
        for (s = 1; s <= 4 - i; s++) {
            printf("   ");
        }

        
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%2d ", a++);
        }

        printf("\n");
    }

    return 0;
}