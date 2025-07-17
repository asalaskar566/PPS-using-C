#include <stdio.h>

int main() {
    int a[7] = {1, 2, 3, 4, 5, 6, 7}, i, index = 0;

    for(i = 0; i < 7; i++) 
    {
        if(a[i] == 4) {
            printf("The number is present at %d\n", i);
            index = 1;
            
        }
    }

    if(index == 0)
        printf("4 not found\n");

    return 0;
}