#include<stdio.h>
//Return Statement
int main()
{
int i,j;
//outer loop - line or column control
       for(i=1;i<=5;i++)
    {
        //inner loop - Row control
       for (j=i; j<=5;j++)
    {
       printf("* ",j); //'*' gap get gaps in print
     }
        printf("\n");
    }

    return 0;
}
