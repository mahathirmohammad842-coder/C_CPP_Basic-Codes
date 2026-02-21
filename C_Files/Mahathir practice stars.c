#include<stdio.h>
int main()
{
    int i,j,k,l;
    printf("Enter a number :" );
    scanf("%d",&j);


    for(i=1;i<=j;++i){
            for(l=5;l<=i;l++){
            printf("");}

        for(k=1;k<=i;k++){
            printf("* ");
    }
        printf(" \n ");
    }
    return 0;
}
