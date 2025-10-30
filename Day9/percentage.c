#include <stdio.h>

int main() {
    float percentage;

    // Input the percentage
    printf("Enter your percentage (0-100): ");
    scanf("%f", &percentage);

    // Check if percentage is valid
    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage! Please enter a value between 0 and 100.\n");
    }
    else if (percentage >= 90) {
        printf("Grade: A\n");
    }
    else if (percentage >= 80) {
        printf("Grade: B\n");
    }
    else if (percentage >= 70) {
        printf("Grade: C\n");
    }
    else if (percentage >= 60) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F\n");
    }

    return 0;
}

