#include <stdio.h>

int main() {
    int rows, i, j;

    // User input for number of rows
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}

