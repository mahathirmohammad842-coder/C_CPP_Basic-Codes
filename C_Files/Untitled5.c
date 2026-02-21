#include <stdio.h>

// Function with no return type, takes one argument
void sayNumber(int num) {
    printf("The number is: %d\n", num);
}

int main() {
    sayNumber(5);  // Call the function with argument 5
    return 0;
}
