#include <stdio.h>

struct STUDENT {
    int roll;
    char name[50];
    float marks[3];
    float total;
    float per;
};

int main() {
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct STUDENT s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks in 3 subjects: ");
        s[i].total = 0;
        for (j = 0; j < 3; j++) {
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].per = s[i].total / 3.0;
    }

    printf("\nStudent Result:");
    for (i = 0; i < n; i++) {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal Marks: %.0f", s[i].total);
        printf("\nPercentage: %.2f%%\n", s[i].per);
    }

    return 0;
}