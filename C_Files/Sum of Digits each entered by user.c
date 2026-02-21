#include <stdio.h>

int main() {
    int n, number, sum = 0;


    printf("Enter the total number of values you want to sum: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        sum += number;
    }


    printf("The sum of the numbers entered is: %d\n", sum);

    return 0;
}
