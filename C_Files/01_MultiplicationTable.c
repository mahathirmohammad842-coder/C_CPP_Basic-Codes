#include<stdio.h>
int main()
{
    int num;
    //Take a number from a user
    printf("Enter the value of number whose multiplication table is to be printed :");
    scanf("%d",&num);

    for(int i=1;i<=10;i++)
    {
        printf("%d x %d =%d\n", num,i,i*num);

    }
    return 0;
}
