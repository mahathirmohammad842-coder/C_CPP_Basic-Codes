#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number :");
    scanf("%d", &n);
    if(n < 0)
    {
     printf("The number is negative : ");
    }
    else if (n > 0)
    {
        printf("The number is positive\n");
    }
    else
    {
    printf("The number is you entered is zero\n");
    }
    return 0;
}
