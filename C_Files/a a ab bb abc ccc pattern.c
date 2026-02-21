#include <stdio.h>

int main() {
    int i, j;
    char ch;

    for (i = 1; i <= 5; i++) {
        // Printing left-side sequence
        for (ch = 'a'; ch < 'a' + i; ch++) {
            printf("%c", ch);
        }

        // Adding spaces for alignment
        for (j = 1; j <= (5 - i) * 3; j++) {
            printf(" ");
        }

        // Printing right-side repeated characters
        for (j = 1; j <= i; j++) {
            printf("%c", 'a' + i - 1);
        }

        printf("\n");
    }

    return 0;
}
