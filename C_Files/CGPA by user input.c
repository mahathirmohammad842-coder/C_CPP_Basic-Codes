#include <stdio.h>

int main()
{
    float cgpa;

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    if (cgpa == 4.00)
        printf("You have scored A+\n");
    else if (cgpa < 4.00 && cgpa >= 3.75)
        printf("You have scored A\n");
    else if (cgpa < 3.75 && cgpa >= 3.50)
        printf("You have scored A-\n");
    else if (cgpa < 3.50 && cgpa >= 3.25)
        printf("You have scored B+\n");
    else if (cgpa >= 2.00)
        printf("You have scored F\n");
    else
        printf("Invalid Input\n");

    return 0;
}


