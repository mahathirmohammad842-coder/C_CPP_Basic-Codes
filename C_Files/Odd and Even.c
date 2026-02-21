#include<stdio.h>


int main(){
int n,i;

printf("Enter a positive number : ");
scanf("%d",&n);


for(i=1; i<=n;i++){
    if(n % 2 ==0){
        printf("The number is even");
    }

else{ printf("ODD"); }
break;
}

return 0;
}

