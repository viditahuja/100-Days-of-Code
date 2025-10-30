#include <stdio.h>

int main() {
    int i, j, space;

    for(i = 5; i >= 1; i--) {
        // print spaces
        for(space = 1; space < i; space++) {
            printf(" ");
        }
        // print numbers
        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

