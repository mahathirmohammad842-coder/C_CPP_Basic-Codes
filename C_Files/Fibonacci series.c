#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter number of terms (<100): ");
    scanf("%d", &n);

    if(n <= 0 || n >= 100) {
        printf("Invalid input.\n");
        return 1;
    }

    for(i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
