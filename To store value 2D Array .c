
#include <stdio.h>

int main()
{
    int a[3][3];
    int i,j;
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
     {
        printf("Enter the value at row =%d, column=%d\t",i,j);
        scanf("%d",&a[i][j]);
     }
     printf("\n");
  }
  return 0;
}