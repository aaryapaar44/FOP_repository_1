#include <stdio.h>

int main() {
    int num, remainder;

    printf("Enter an integer number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Digits in reverse order: ");

    // Handle the case if the user enters 0
    if (num == 0) {
        printf("0");
    }

    // Loop to extract and print digits
    while (num != 0) {
        remainder = num % 10;
        // Handle negative numbers by using absolute value for digits
        if (remainder < 0) remainder = -remainder;
        
        printf("%d ", remainder);
        num = num / 10;
    }

    printf("\n");
    return 0;
}