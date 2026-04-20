#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;
    unsigned long long fact;

    printf("--- Simple Calculator ---\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Power (x^y)\n6. Factorial (x!)\n");
    printf("Select choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result = %.2lf\n", num1 + num2);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result = %.2lf\n", num1 - num2);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result = %.2lf\n", num1 * num2);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0)
                printf("Result = %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero\n");
            break;
        case 5:
            printf("Enter base (x) and exponent (y): ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result = %.2lf\n", pow(num1, num2));
            break;
        case 6:
            printf("Enter an integer: ");
            int n;
            scanf("%d", &n);
            if (n < 0) {
                printf("Error: Negative factorial\n");
            } else {
                fact = 1;
                for (int i = 1; i <= n; i++) fact *= i;
                printf("Result = %llu\n", fact);
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}