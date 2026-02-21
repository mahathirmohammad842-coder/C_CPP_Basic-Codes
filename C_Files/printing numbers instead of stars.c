#include<stdio.h>
//Return Statement
int main()
{
int i,j;
//outer loop - line or column control
       for(i=1;i<=3;i++)
    {
        //inner loop - Row control
       for (j=1; j<=5;j++)
    {
       printf("%d ",j);//%d gap get gaps in print
     }
        printf("\n");
    }

    return 0;
}
