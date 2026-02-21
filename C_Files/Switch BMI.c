#include <stdio.h>

int main() {
    double weight, height, bmi;
    printf("Enter weight (kg): ");
    scanf("%lf", &weight);
    printf("Enter height (m): ");
    scanf("%lf", &height);

    bmi = weight / (height * height);

    int category = (bmi < 18.5) ? 0 : (bmi < 24.9) ? 1 : (bmi < 29.9) ? 2 : 3;

    switch (category) {
        case 0:
            printf("BMI:  - Underweight\n", bmi);
            break;
        case 1:
            printf("BMI: - Normal weight\n", bmi);
            break;
        case 2:
            printf("BMI:  - Overweight\n", bmi);
            break;
        case 3:
            printf("BMI: - Obesity\n", bmi);
            break;
        default:
            printf("Error in calculating BMI\n");
    }

    return 0;
}
