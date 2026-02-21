#include<stdio.h>
int main(){
int a[100],n,i,sum=0,max=-10;

printf("How many numbers to process :");
scanf("%d",&n);

for(i=0; i<n; i++)
{
    scanf("%d",&a[i]);
}

for(i=0; i<n; i++)
{
    if(max < a[i])
        max = a[i];
}

printf("Maximum is %d ",max);

return 0;
}
