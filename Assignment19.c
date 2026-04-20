#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50], desig[50], gender, doj[15];
    float salary;
};

int main() {
    int n, m = 0, f = 0;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct EMPLOYEE e[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Name, Desig, Gender(M/F), DOJ, Salary: ");
        scanf("%s %s %c %s %f", e[i].name, e[i].desig, &e[i].gender, e[i].doj, &e[i].salary);
        if (e[i].gender == 'M' || e[i].gender == 'm') m++;
        else if (e[i].gender == 'F' || e[i].gender == 'f') f++;
    }

    printf("\nTotal: %d\nMales: %d\nFemales: %d", n, m, f);

    printf("\nSalary > 10000: ");
    for (int i = 0; i < n; i++) 
        if (e[i].salary > 10000) printf("%s ", e[i].name);

    printf("\nAsstManagers: ");
    for (int i = 0; i < n; i++) 
        if (strcmp(e[i].desig, "AsstManager") == 0) printf("%s ", e[i].name);

    printf("\n");
    return 0;
}