#include <stdio.h>

int main() {
    int distance;
    printf("Enter your distance: ");
    scanf("%d", &distance);

    switch (distance) {
        case 0:
            printf("Please enter a positive distance.\n");
            break;
        default:
            switch (distance / 5) {
                case 0:
                    printf("For short distances: Consider walking, cycling\n");
                    break;
                case 1:
                case 2:
                case 3:
                case 4:
                    printf("For medium distances: Consider using a motorbike, or a car.\n");
                    break;
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                case 18:
                case 19:
                case 20:
                    printf("For long distances: Consider using a car, train, or bus.\n");
                    break;
                default:
                    printf("For very long distances: Consider using a flight.\n");
                    break;
            }
    }

    return 0;
}
