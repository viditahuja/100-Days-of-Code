#include <stdio.h>

#define PI 3.14159  // Define value of π

int main() {
    float radius;
    float area, circumference;

    // Input radius
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}

