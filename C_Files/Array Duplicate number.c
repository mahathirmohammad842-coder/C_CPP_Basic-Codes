#include<stdio.h>

int main(){

int a[5],i,j;

for(i=0;i<5; i++){

printf("Enter  values : ");
scanf("%d",&a[i]);


}

for(i=0;i<5; i++){
    for(j=i+1; j<5; j++){
        if(a[i]==a[j]){
            printf("%d",a[i]);
        }
    }


}







return 0;
}
