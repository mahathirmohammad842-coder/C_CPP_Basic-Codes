#include <stdio.h>

// 1. No return type, no argument
void printBinary() {
    int num = 10; // Example number
    printf("Binary of %d: ", num);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

// 2. No return type, with argument
void convertToBinary(int num) {
    printf("Binary of %d: ", num);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

// 3. With return type, no argument
int getBinary() {
    int num = 10; // Example number
    int binary = 0, place = 1;
    while (num > 0) {
        binary += (num % 2) * place;
        num /= 2;
        place *= 10;
    }
    return binary;
}

// 4. With return type, with argument
int decimalToBinary(int num) {
    int binary = 0, place = 1;
    while (num > 0) {
        binary += (num % 2) * place;
        num /= 2;
        place *= 10;
    }
    return binary;
}

int main() {
    printBinary();

    convertToBinary(25);

    int bin = getBinary();
    printf("Returned Binary: %d\n", bin);

    int result = decimalToBinary(37);
    printf("Binary of 37: %d\n", result);

    return 0;
}
