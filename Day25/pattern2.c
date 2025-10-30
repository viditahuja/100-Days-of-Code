#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5;

    for(i = 1; i <= rows; i++) {
        // Print leading spaces
        for(space = 1; space < i; space++) {
            printf(" ");
        }
        // Print stars
        for(j = i; j <= rows; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

