#include <stdio.h>

int main() {
    float length, breadth;
    float area, perimeter;

    // Input length and breadth
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display results
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}

