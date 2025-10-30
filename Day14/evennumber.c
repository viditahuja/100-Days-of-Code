#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Sum of first n odd numbers
    for(int i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // Formula for ith odd number
    }

    printf("Sum of the first %d odd numbers = %d\n", n, sum);

    return 0;
}

