#include<stdio.h>
int main(){

int i,n,sum=0;
printf("Enter a positive integer : ");
scanf("%d",&n);


for(i=1; i<=n; i+=2){


     sum = sum + i;


}
 printf("Sum of %d numbers is %d ",n,sum);

return 0;
}
