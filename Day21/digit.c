#include <stdio.h>

int main() {
    int n, temp, first, last, digits = 0, result;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = temp % 10; // last digit

    // Count number of digits
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    first = temp;
    while(first >= 10) { // get first digit
        first /= 10;
    }

    // If number has only one digit, no swap needed
    if(digits == 1) {
        result = n;
    } else {
        // Remove first and last digit from number
        int middle = n - first * pow(10, digits - 1) - last;
        
        // Reconstruct number with swapped digits
        result = last * pow(10, digits - 1) + middle + first;
    }

    printf("Number after swapping first and last digit: %d\n", result);

    return 0;
}


