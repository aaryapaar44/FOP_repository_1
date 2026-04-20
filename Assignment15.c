#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i;

    // Use current time as seed for random generator
    srand(time(0));

    printf("Enter how many random numbers you want: ");
    scanf("%d", &n);

    printf("Pseudo Random Numbers:\n");
    for (i = 0; i < n; i++) {
        // rand() produces a number between 0 and RAND_MAX
        printf("%d\n", rand());
    }

    return 0;
}