
#include <stdio.h>

int main()
{
    int i, rem;
    for(i = 0; i <= 20; i++)
    {
        rem = i % 2;
        if(rem == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}