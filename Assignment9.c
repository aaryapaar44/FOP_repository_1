#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        
        // Compute sum of cubes of digits
        result += remainder * remainder * remainder;
        
        // Removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}