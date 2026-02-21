#include<stdio.h>
int main()

{
   int i,n;

   printf("Enter a positive integer number  :");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
    if(n%i==0)
   {
       printf("The input number is not prime : ");
       break;
   }

    else if(n==0)
    {
        printf("The input number is not prime : ");
       break;
    }
   else
   {
    printf("The input number is  prime ");
    break;
   }
   return 0;
}
