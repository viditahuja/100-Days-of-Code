#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    // Input operator and numbers
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // space before %c ignores any leftover newline
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform calculation based on operator
    switch(op) {
        case '+':
            printf("Result = %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result = %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result = %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        case '%':
            if ((int)num2 != 0)
                printf("Result = %d\n", (int)num1 % (int)num2);
            else
                printf("Error! Modulus by zero.\n");
            break;
        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}

