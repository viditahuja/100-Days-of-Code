#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Input three numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    // Find largest using if-else
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Display result
    printf("The largest number is %d\n", largest);

    return 0;
}

