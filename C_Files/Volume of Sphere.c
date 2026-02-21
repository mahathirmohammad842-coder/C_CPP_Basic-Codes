#include<stdio.h>
#include<math.h>
#define pi 3.1416

int main()
 {
   float r, vol;

   printf("Input the value of radius: ");
   scanf("%f",&r);

   vol=1.33*pi*pow(r,3);

   printf("The volume of the sphere is: %.2f", vol);

   return 0;
}
