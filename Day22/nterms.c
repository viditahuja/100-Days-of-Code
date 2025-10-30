#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int numerator = 1, denominator = 1;

    for(int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;     // next odd number
        denominator += 2;   // next even number
    }

    printf("Sum of the series up to %d terms: %.2lf\n", n, sum);

    return 0;
}

