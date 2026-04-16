#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float pi = 3.14159;

    // Input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculations
    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    // Output
    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
