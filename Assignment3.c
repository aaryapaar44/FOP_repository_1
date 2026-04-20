#include <stdio.h>

int main() {
    int num, i;

    printf("Enter the number to generate its multiplication table: ");
    scanf("%d", &num);

    printf("\nMultiplication Table for %d:\n", num);
    printf("---------------------------\n");

    // Using a for loop to generate the table from 1 to 10
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}