#include <stdio.h>

int main() {
    int n, product = 1;
    int hasOdd = 0; // to check if there is at least one odd digit

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;

    while(temp != 0) {
        int digit = temp % 10;
        if(digit % 2 != 0) { // check if digit is odd
            product *= digit;
            hasOdd = 1;
        }
        temp /= 10;
    }

    if(hasOdd) {
        printf("Product of odd digits of %d is: %d\n", n, product);
    } else {
        printf("No odd digits in %d.\n", n);
    }

    return 0;
}

