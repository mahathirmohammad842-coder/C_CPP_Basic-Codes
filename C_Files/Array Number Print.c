#include<stdio.h>
int main(){

 int a[15],n,i;
 printf("Enter Number Quantity : ");
 scanf("%d", &n);

 for(i=0; i<n;i++){
    scanf("%d",&a[i]);
 }
 for(i=0; i<n; i++){
    printf("%d ",a[i]);
 }



return 0;
}
