#include<stdio.h>
int main(){

int n,even=0,odd=0,a[20];

printf("Enter the value of n :");
scanf("%d",&n);

if(n>=20)
{
    printf("Input number is invalid");
}
for(int i=0; i<n; i++)
{
scanf("%d",&a[i]);

if(a[i]%2==0)
{
even++;
}
else{odd++;}
}
printf("Even is %d , odd is %d ",even,odd);

return 0;
}
