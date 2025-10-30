#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int original = n; // store original number for printing

    while(n != 0) {
        remainder = n % 10;          // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        n /= 10;                     // remove last digit
    }

    printf("Reversed number of %d is: %d\n", original, reversed);

    return 0;
}

