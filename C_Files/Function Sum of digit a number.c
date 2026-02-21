#include <stdio.h>

int SumOfDigits(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 10; // Extract the last digit and add it to sum
        N /= 10; // Remove the last digit
    }
    return sum;
}

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    printf("Sum of digits: %d\n", SumOfDigits(N));

    return 0;
}
