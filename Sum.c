#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate sum
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    // Output
    printf("Sum of numbers from 1 to %d = %d\n", n, sum);

    return 0;
}
