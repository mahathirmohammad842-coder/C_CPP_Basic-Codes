#include<stdio.h>
#include<math.h>

int main()
{
  float r, h, area;
  printf("Input the value of base: ");
  scanf("%f",&r);
  printf("Input the value of height: ");
  scanf("%f",&h);
  area=0.5*r*h;
  printf("The area of the triangle is: %.2f", area);
  return 0;
}
