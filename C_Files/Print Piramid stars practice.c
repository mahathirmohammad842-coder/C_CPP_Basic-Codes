#include<stdio.h>
int main()
{ int i,j,k,l,m;
    for(i=1; i<=5;i++) //Row numbers
    {
        for(j=1;j<=i;j++) //Space maintain
        {
             printf(" ");
        }
            for(k=i; k<=5;k++) // stars maintain
            {
                 printf("* ");

            }printf("\n");
    }

        return 0;
    }


