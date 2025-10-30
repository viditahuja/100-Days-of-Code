#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Binary representation of %d is: ", n);

    // Handle 0 separately
    if(n == 0) {
        printf("0\n");
        return 0;
    }

    int binary[32]; // assuming 32-bit integer
    int i = 0;

    while(n > 0) {
        binary[i] = n % 2; // store remainder
        n = n / 2;
        i++;
    }

    // print binary in reverse order
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
    return 0;
}

