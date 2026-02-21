#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    printf("Even number in array:");
    for(int i=1;i<size;i++){
            if(a[i]%2==0){
                printf("\n%d ",a[i]);
            }
            }
            printf("\n");
            return 0;
}
