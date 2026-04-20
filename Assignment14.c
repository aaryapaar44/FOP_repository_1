#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, i = 0, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        // Get the last digit
        remainder = binary % 10;
        // Multiply digit by 2^i and add to total
        decimal += remainder * pow(2, i);
        // Remove the last digit
        binary /= 10;
        // Increase the power
        i++;
    }

    printf("Decimal equivalent = %d\n", decimal);

    return 0;
}