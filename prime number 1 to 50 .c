
#include <stdio.h>

int main()
{
    int i,j,flag,rem;
    for(i=1;i<=50;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
           rem=i%j;
           if(rem==0)
           {
           flag=1;
           }  
        }
        if (flag==0)
        {
           printf ("%d\n" ,i);
        }
    }
    return 0;
}