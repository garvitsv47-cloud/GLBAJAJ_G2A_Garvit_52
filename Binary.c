#include <stdio.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, remainder;

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}

void decimalToBinary(int decimal) {
    int binary[32], i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary number = ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    long long binary;
    int decimal, choice;

    printf("Choose conversion:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter binary number: ");
        scanf("%lld", &binary);
        printf("Decimal number = %d\n", binaryToDecimal(binary));
    } 
    else if (choice == 2) {
        printf("Enter decimal number: ");
        scanf("%d", &decimal);
        decimalToBinary(decimal);
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
