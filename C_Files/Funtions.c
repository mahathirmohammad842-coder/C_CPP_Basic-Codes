#include <stdio.h>

void DecimalToBinary(int N) {
    if (N > 1)
        DecimalToBinary(N / 2);

    printf("%d", N % 2);
}

int main() {
    int N;
    printf("Enter a decimal integer value: ");
    scanf("%d", &N);

    DecimalToBinary(N);
    printf("\n");

    return 0;
}

