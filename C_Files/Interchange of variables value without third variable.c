#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of A : ");
    scanf("%d", &a);
    printf("Enter the value of B : ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("The changed value of A is : %d and changed value of B is: %d", a, b);
    return 0;
}
