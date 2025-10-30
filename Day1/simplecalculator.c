#include <stdio.h>

int main() {
    float num1, num2;  // Using float to handle decimal numbers
    float sum, difference, product, quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculate sum, difference, product
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Calculate quotient with check for division by zero
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Cannot divide by zero!\n");
    }

    // Display results
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);

    return 0;
}

