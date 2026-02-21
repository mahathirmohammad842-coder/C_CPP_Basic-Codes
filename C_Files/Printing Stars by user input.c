#include<stdio.h>
int main()
{
  int i,j,k;
  printf("Enter your line number : ");
  scanf("%d", &k);
  for (i=1; i<=k;i++){

      for (j=i;j<=10;j++)

        printf("*");
      printf("\n*");
  }
  return 0;
}

