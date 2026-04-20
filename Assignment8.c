#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, per;
    int pass = 1;

    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Check if student passed every subject (minimum 40)
    if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40) {
        pass = 0;
    }

    total = m1 + m2 + m3 + m4 + m5;
    per = total / 5.0;

    printf("\nTotal Marks = %.0f", total);
    printf("\nPercentage = %.2f%%", per);

    if (pass) {
        printf("\nResult: PASS");
        printf("\nGrade: ");
        if (per >= 75)
            printf("Distinction\n");
        else if (per >= 60)
            printf("First Division\n");
        else if (per >= 50)
            printf("Second Division\n");
        else
            printf("Third Division\n");
    } else {
        printf("\nResult: FAIL\n");
    }

    return 0;
}