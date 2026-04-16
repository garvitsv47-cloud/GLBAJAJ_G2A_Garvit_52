#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    // Input in Fahrenheit
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5/9;
    printf("Temperature in Celsius = %.2f\n", celsius);

    return 0;
}
