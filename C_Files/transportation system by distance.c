#include <stdio.h>
int main()
{ int distance;
printf("Enter your distance : ");
scanf("%d",&distance);

    if (distance <= 0) {
        printf("Please enter a positive distance.\n");
    } else if (distance > 0 && distance <= 5) {
        printf("For short distances : Consider walking, cycling\n", distance);
    } else if (distance > 5 && distance <= 20) {
        printf("For medium distances : Consider using a motorbike, or a car.\n", distance);
    } else if (distance > 20 && distance <= 100) {
        printf("For long distances : Consider using a car, train, or bus.\n", distance);
    } else {
        printf("For very long distances : Consider using a flight.\n");
    }
    return 0;
}

