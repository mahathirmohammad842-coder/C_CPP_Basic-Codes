#include<stdio.h>

int main()
{
int i,j;
//outer loop - line or column control
       for(i=1;i<=5;i++)
    {
        //inner loop - Row control
       for (j=1; j<=i;j++)
    {
       printf("%d ",j); //'*' gap get gaps in print
     }
        printf("\n");
    }

    return 0;
}
