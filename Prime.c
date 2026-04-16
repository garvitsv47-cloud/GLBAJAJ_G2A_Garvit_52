#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Prime numbers less than 2 are not prime
    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Output
    if (isPrime) {
        printf("The number is Prime.\n");
    } else {
        printf("The number is Not Prime.\n");
    }

    return 0;
}
