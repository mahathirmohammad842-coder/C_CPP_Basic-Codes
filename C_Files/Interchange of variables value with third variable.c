#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("Changed value of A is : %d and changed value of B is :%d", a, b);
    return 0;
}
