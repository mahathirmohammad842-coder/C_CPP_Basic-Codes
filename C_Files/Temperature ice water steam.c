#include<stdio.h>
int main()
{
    float temp;
    printf("Enter the temperature of water : ");
    scanf("%f",&temp);


    if(temp<0)
    {
        printf("ICE\n");
    }
    else if(temp>=0 && temp<=100)
    {
        printf("WATER\n");
    }
    else
    {
        printf("STEAM\n");
    }

    return 0;
}
