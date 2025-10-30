#include <stdio.h>

int main() {
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Start from the greater of a and b
    lcm = (a > b) ? a : b;

    // Keep checking until lcm is divisible by both a and b
    while(1) {
        if(lcm % a == 0 && lcm % b == 0) {
            break; // found LCM
        }
        lcm++; // try next number
    }

    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}

