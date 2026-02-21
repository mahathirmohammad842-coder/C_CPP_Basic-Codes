#include <stdio.h>
#include <math.h>

int main() {
    int n, i,prime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    //for(i = 2; i*i <= n; i++) {
    //for(i = 2; i <= n/2; i++) {
    for(i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            prime = 0; // the number is not prime
            break;
        }
    }

    if (prime ) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}
