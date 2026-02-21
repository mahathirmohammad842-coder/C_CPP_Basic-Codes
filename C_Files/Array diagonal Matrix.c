#include<stdio.h>
int main(){

 int arr[10][10],i,j,sum=0;

 for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        if(i==j){
            printf("Enter Element of index [%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
          else arr[i][j]=0;
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n\n");
    }

  return 0;
 }













