#include<stdio.h>
int main()
{
    int n,i, j,temp;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:%d\n",n);
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
     }
    }
    printf("duplicate elements:\n");
    for(i=0; i<n-1; i++){
    if(arr[i]=arr[i+1]){
        printf("%d\n",arr[i]);
        while(i<n-1 && arr[i]==arr[i+1]){
            i++;
        }
    }
    }
    return 0;
}
