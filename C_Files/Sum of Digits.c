#include <stdio.h>

int main() {
    int n,sum = 0;


    printf("Enter the positive integer value :  ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {

        sum = sum + i;
    }


    printf("The sum of the numbers entered is: %d\n", sum);

    return 0;
}
