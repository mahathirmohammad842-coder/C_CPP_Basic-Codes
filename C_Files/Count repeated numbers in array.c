#include<stdio.h>
int main(){
int a[100],n,i,sum=0,count=0;

printf("How many numbers to process :");
scanf("%d",&n);

for(i=0; i<n; i++)
{
    scanf("%d",&a[i]);
}

for(i=0; i<n; i++)
{
    if(a[i]==1)

     count= count+1;
}

printf("Repeated number 1 is %d ",count);

return 0;
}
