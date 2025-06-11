
#include <stdio.h>

int main()
{
    int marks [15],i;
    for(i=0;i<15;i++)
    {
      printf("Enter marks of %d student",i+1);
      scanf("%d",& marks[i]);
    }
      for(i=0;i<15;i++)
    {
      printf("\nmarks of %d are %d",i+1,marks [i]);
    }
    return 0;
}    