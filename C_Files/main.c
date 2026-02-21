#include <stdio.h>

int main()
{
int a,b;
float area;

printf("Enter Base and Height : ");
scanf("%d",&a);
scanf("%d",&b);

area = (1.0/2)* a * b;

printf("Area of Triangle : %f ",area);


    return 0;
}
