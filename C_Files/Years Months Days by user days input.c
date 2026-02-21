#include<stdio.h>

int main()
{
    int N,M,Y,D;
    printf("Enter your Number of Days: ");
    scanf("%d", &N);

    Y = N / 365;
    M = (N % 365)/30;
    D = (N%365)%30;

    printf("%d years, %d month , %d days",Y, M, D);
  return 0;
}
