#include<stdio.h>


void printValue(int *x) {
    x = x + 10; // This change won't affect the original variable
    printf("%d",x);
}

int main() {
    int a = 5;
    printValue(&a);
    printf("%d",a); // Output: 15, but a is still 5
}
