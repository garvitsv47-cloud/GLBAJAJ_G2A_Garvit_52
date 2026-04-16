#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative number
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Output
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
