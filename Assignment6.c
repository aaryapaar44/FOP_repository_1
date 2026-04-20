#include <stdio.h>

// Function to compute factorial without recursion (Iterative)
unsigned long long factorialIterative(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to compute factorial with recursion
unsigned long long factorialRecursive(int n) {
    if (n == 0 || n == 1) // Base case
        return 1;
    return n * factorialRecursive(n - 1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Error: Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Factorial (Without Recursion): %llu\n", factorialIterative(num));
    printf("Factorial (With Recursion):    %llu\n", factorialRecursive(num));

    return 0;
}