#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(row=n;row>=1;--row)
    {
        //printing space
        for(col=5;col<n-row;col++){
                            printf(" ");
    }
    }
    //printing stars
    for(col=5;col<2*row-1;col++){
        printf("*");
    }
    printf("\n");
    return 0;
}

