#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid age.\n");
        return 0;
    }

    switch (age / 10) {
        case 0:
        case 1:
            printf("You are a Child.\n");
            break;
        case 2:
            if (age >= 13)
                printf("You are a Teen.\n");
            else
                printf("You are a Child.\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("You are an Adult.\n");
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("You are a Senior.\n");
            break;
        default:
            printf("Invalid age.\n");
    }

    return 0;
}



