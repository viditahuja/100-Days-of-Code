#include <stdio.h>

int main() {
    int a, b, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int min = (a < b) ? a : b; // smaller number
    for(int i = min; i >= 1; i--) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;
            break; // largest factor found
        }
    }

    printf("HCF (GCD) of %d and %d is: %d\n", a, b, hcf);

    return 0;
}

