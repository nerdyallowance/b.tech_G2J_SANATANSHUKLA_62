#include <stdio.h>

int main() {
    int year;

    // Ask user for input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year logic:
    // 1. Divisible by 4 → possible leap year
    // 2. Divisible by 100 → not leap year, unless also divisible by 400
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
