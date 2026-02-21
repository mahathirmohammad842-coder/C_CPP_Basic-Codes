#include<stdio.h>
int main(){

int i,n,j,sum=0;

printf("Enter start range positive integer value : ");
scanf("%d",&j);

printf("Enter end range positive integer value : ");
scanf("%d",&n);


if(j % 2 ==0)
{
    j++;
}


  for(i=j; i<=n; i+=2)
{
      sum = sum + i;
}

 printf("Sum of odd numbers is %d ",sum);

return 0;
}
