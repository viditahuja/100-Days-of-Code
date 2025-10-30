#include <stdio.h>

int main() {
    int n, sum;

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate sum using formula
    sum = n * (n + 1) / 2;

    // Display result
    printf("Sum of first %d natural numbers is %d\n", n, sum);

    return 0;
}

