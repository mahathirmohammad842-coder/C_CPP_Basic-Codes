#include<stdio.h>
int main()
{
   int a;
   printf("Give me a positive number: ");
   scanf("%d",&a);
   if(a%2==0)
   {

           printf("The number is a prime number.");
       }

   else
   {
       printf("The number is not a prime number.");
   }

  return 0;

}


