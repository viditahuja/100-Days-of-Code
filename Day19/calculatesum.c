#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n; // store original number if needed

    while(temp != 0) {
        sum += temp % 10; // add last digit to sum
        temp /= 10;       // remove last digit
    }

    printf("Sum of digits of %d is: %d\n", n, sum);
    return 0;
}

