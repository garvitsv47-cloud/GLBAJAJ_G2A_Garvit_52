#include <stdio.h>

int main() {
    int a, b, temp;

    // Input
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;

    // Output
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
