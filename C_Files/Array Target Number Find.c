#include<stdio.h>
int main(){
 int arr[20],n,target,i;


     printf("Enter The value of n : ");
     scanf("%d",&n);

       for(int i=0; i<n ; i++)
     {
        printf("Enter The numbers of the element : ");
        scanf("%d",&arr[i]);
     }
printf("Enter The Target value : ");
scanf("%d",&target);

     for(int i=0; i<n; i++){
            if(arr[i]==target){
                printf("%d is the location ",i);
            break;
            else{printf("Not found")}



return 0;
}
