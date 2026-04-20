#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Rule: Divisible by 400 OR (Divisible by 4 AND Not divisible by 100)
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap Year\n", year);
    } else {
        printf("%d is Not a Leap Year\n", year);
    }

    return 0;
}