#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[100], str2[100], temp[200];
    int choice;

    while (1) {
        printf("\n--- String Operations Menu ---");
        printf("\n1. Length of Strings");
        printf("\n2. Copy String");
        printf("\n3. Concatenation");
        printf("\n4. Comparison");
        printf("\n5. Reverse (Manual using strrev logic)");
        printf("\n6. Exit");
        printf("\nSelect an option: ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Exiting program...\n");
            break;
        }

        // Input strings for the operations
        printf("Enter first string: ");
        scanf("%s", str1);
        
        if (choice == 3 || choice == 4) {
            printf("Enter second string: ");
            scanf("%s", str2);
        }

        switch (choice) {
            case 1:
                printf("Length of '%s' is: %zu\n", str1, strlen(str1));
                break;

            case 2:
                strcpy(temp, str1);
                printf("String copied successfully! Copied string: %s\n", temp);
                break;

            case 3:
                strcpy(temp, str1); // Use temp to keep original str1 intact
                strcat(temp, str2);
                printf("Concatenated string: %s\n", temp);
                break;

            case 4:
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
               
                printf("Original: %s | Reversed: ", str1);
                for (int i = strlen(str1) - 1; i >= 0; i--) {
                    putchar(str1[i]);
                }
                printf("\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}