#include<stdio.h>
int main()
{
    int i,j,n=4;
    for(i=0;i<n;i++){{//printing space
        for(j=0;j<n-i-1;j++)
            printf(" ");
    }
    //num1

    for(j=1;j<=i+1;j++){
    printf("%d",j);}
    //num2
    for(j=i;j>=1;j--){
        printf("%d",j);
    }
    printf("\n");


}  return 0;
}
