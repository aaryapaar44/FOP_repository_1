#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, sum, term;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);

    sum = x;
    term = x;

    for (i = 1; i < n; i++) {
        // Each term is: (-1)^i * (x^(2i+1) / (2i+1)!)
        // To optimize, we derive the next term from the previous one
        term = -term * x * x / ((2 * i) * (2 * i + 1));
        sum += term;
    }

    printf("Sum of sine series = %f\n", sum);

    return 0;
}