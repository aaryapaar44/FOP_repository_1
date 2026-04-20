#include <stdio.h>

int main() {
    float basic_pay, hra, ta, gross_salary, professional_tax, net_salary;

    // Input: Basic Pay from user
    printf("Enter the Basic Pay of the employee: ");
    scanf("%f", &basic_pay);

    // Calculations based on problem statement
    hra = 0.10 * basic_pay;          // 10% of basic pay
    ta = 0.05 * basic_pay;           // 5% of basic pay
    gross_salary = basic_pay + hra + ta;

    professional_tax = 0.02 * gross_salary; // 2% of total (gross) salary
    net_salary = gross_salary - professional_tax;

    // Output: Displaying the salary breakdown
    printf("\n--- Salary Slip ---\n");
    printf("Basic Pay         : %.2f\n", basic_pay);
    printf("HRA (10%%)         : %.2f\n", hra);
    printf("TA (5%%)           : %.2f\n", ta);
    printf("--------------------------\n");
    printf("Gross Salary      : %.2f\n", gross_salary);
    printf("Professional Tax  : %.2f\n", professional_tax);
    printf("--------------------------\n");
    printf("Net Salary Payable: %.2f\n", net_salary);

    return 0;
}