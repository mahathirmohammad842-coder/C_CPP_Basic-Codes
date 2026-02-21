#include <stdio.h>

int main() {
    double weight, height, bmi;
    printf("Enter weight (kg): ");
    scanf("%lf", &weight);
    printf("Enter height (m): ");
    scanf("%lf", &height);

    bmi = weight / (height * height);

    if (bmi < 18.5)
        printf("BMI: %.2f - Underweight\n", bmi);
    else if (bmi < 24.9)
        printf("BMI: %.2f - Normal weight\n", bmi);
    else if (bmi < 29.9)
        printf("BMI: %.2f - Overweight\n", bmi);
    else
        printf("BMI: %.2f - Obesity\n", bmi);

    return 0;
}
