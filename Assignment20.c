#include <stdio.h>

// Function for Call by Value (Without Pointers)
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    // Values are swapped ONLY inside this function scope
    printf("Inside swapByValue function: a = %d, b = %d\n", a, b);
}

// Function for Call by Reference (With Pointers)
void swapByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    // Original values in main() are modified via addresses
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int original_a = num1, original_b = num2;

    // 1. Swapping without pointers
    printf("\nCall by Value ");
    swapByValue(num1, num2);
    printf("After swapByValue in main: a = %d, b = %d (No change!)\n", num1, num2);

    // 2. Swapping with pointers
    printf("\nCall by Reference");
    swapByReference(&num1, &num2);
    printf("After swapByReference in main: x = %d, y = %d (Successfully swapped!)\n", num1, num2);

    return 0;
}