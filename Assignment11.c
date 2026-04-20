#include <stdio.h>
#include <math.h>

int main() {
    int num, choice, i;
    unsigned long long fact = 1;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    printf("\n--- Mathematical Operations Menu ---");
    printf("\n1. Square Root");
    printf("\n2. Square");
    printf("\n3. Cube");
    printf("\n4. Check Prime");
    printf("\n5. Factorial");
    printf("\n6. Prime Factors");
    printf("\nSelect your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (num >= 0)
                printf("Square Root = %.2f\n", sqrt(num));
            else
                printf("Square root of negative number is not real.\n");
            break;

        case 2:
            printf("Square = %d\n", num * num);
            break;

        case 3:
            printf("Cube = %d\n", num * num * num);
            break;

        case 4:
            if (num <= 1) i = 0;
            else {
                int isPrime = 1;
                for (i = 2; i <= sqrt(num); i++) {
                    if (num % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
                if (isPrime) printf("%d is a Prime number.\n", num);
                else printf("%d is not a Prime number.\n", num);
            }
            break;

        case 5:
            if (num < 0) printf("Factorial not defined for negative numbers.\n");
            else {
                for (i = 1; i <= num; i++) fact *= i;
                printf("Factorial = %llu\n", fact);
            }
            break;

        case 6:
            printf("Prime Factors: ");
            int temp = num;
            for (i = 2; i <= temp; i++) {
                while (temp % i == 0) {
                    printf("%d ", i);
                    temp /= i;
                }
            }
            printf("\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}