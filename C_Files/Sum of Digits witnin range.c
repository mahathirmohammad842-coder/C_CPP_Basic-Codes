#include<stdio.h>
int main(){

int i,n,j,sum=0;

printf("Enter start range positive integer value : ");
scanf("%d",&j);

printf("Enter end range positive integer value : ");
scanf("%d",&n);



for(i=j; i<=n; i++){
    for(i=j; i<=n; i++){
        if(n % i ==0){
      sum = sum + i;
        }

    }

}
 printf("Sum of numbers is %d ",sum);

return 0;
}
