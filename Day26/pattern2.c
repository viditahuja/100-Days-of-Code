#include <stdio.h>

int main() {
    int i, j;

    // First star
    printf("*\n\n");

    // 2nd block: 2 and 3 stars
    for(i = 2; i <= 3; i++) {
        for(j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    // 3rd block: 4 and 5 stars
    for(i = 4; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    // 4th block: 3 stars
    for(i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Last single star
    printf("*\n");

    return 0;
}

