#include<stdio.h>
int main(){
int a[10]={0,1,2,3,4,5,6,7,8,9};
int sum=0;

for(int i=0; i<=9; i++){
    sum = sum+a[i];
}

printf("Sum is %d",sum);


return 0;
}
