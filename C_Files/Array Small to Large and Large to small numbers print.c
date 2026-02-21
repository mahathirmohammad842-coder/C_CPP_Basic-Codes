#include<stdio.h>

int main(){
    int a[15],n,i,j,t;
    printf("Enter number Quantity :");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
      //for(j=0; j<n; j++)
        for(i=0; i<n; i++){
            if(a[i]>a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
            }

        for(i=0; i<n; i++){
            printf("%d ",a[i]);
        }
return 0;
}
