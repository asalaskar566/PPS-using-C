
#include <stdio.h>

int main()
{
    int a[3][3]={{1,2,3},{6,7,8},{5,4,9}};
    int i,j;
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
     {
        printf("%d",a[i][j]);
     }
         printf("\n");
  }
  return 0;
}