#include <stdio.h>

int main() {
    int year;

    // Input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("It is a Leap Year.\n");
    } else {
        printf("It is not a Leap Year.\n");
    }

    return 0;
}
