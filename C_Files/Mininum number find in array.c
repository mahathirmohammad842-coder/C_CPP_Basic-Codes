#include<stdio.h>
int main(){
int a[100],n,i,sum=0,min=10000;

printf("How many numbers to process :");
scanf("%d",&n);

for(i=0; i<n; i++)
{
    scanf("%d",&a[i]);
}

for(i=0; i<n; i++)
{
    if(min > a[i])
        min = a[i];
}

printf("Minimum is %d ",min);

return 0;
}
