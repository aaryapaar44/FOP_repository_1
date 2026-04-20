#include <stdio.h>

int main() {
    int num1, num2, n1, n2, scd = -1, gcd;

    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);

    // Find Smallest Common Divisor (SCD) > 1
    int min = (num1 < num2) ? num1 : num2;
    for (int i = 2; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            scd = i;
            break;
        }
    }

    // Find Greatest Common Divisor (GCD) using Euclidean Algorithm
    n1 = num1;
    n2 = num2;
    while (n2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    gcd = n1;

    // Output results
    if (scd != -1)
        printf("Smallest Common Divisor: %d\n", scd);
    else
        printf("Smallest Common Divisor: None (other than 1)\n");

    printf("Greatest Common Divisor (GCD): %d\n", gcd);

    return 0;
}