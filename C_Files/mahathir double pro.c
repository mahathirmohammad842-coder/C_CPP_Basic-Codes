#include<stdio.h>
int main()
{
    int a = 0, b = 10;
    if(++a)  // Pre-increment a
    {
        b = b - 2;
    }
    if(--a)  // Pre-decrement a
    {
        b = b + 10;
    }
    printf("%d %d", a, b);
    return 0;
}
