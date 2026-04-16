#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Reverse logic
    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    // Output
    printf("Reversed number = %d\n", reverse);

    return 0;
}
