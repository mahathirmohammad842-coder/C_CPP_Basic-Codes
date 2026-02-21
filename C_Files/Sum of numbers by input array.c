#include<stdio.h>
int main(){
int a[10],n,i,sum=0;
printf("Enter how many numbers to process : ");
scanf("%d",&n);

for(int i=0; i<n; i++){
        scanf("%d",&a[i]);  }

for(int i=0; i<n; i++){
sum = sum+a[i];

}

printf("Sum is %d",sum);


return 0;
}
