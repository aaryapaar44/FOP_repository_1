#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], rev[100];
    int len;

    printf("Enter a string: ");
    scanf("%s", s1);
    printf("Enter another string for equality/substring check: ");
    scanf("%s", s2);

    // i) Length
    len = strlen(s1);
    printf("\nLength of string = %d", len);

    // ii) Reversal
    for (int i = 0; i < len; i++)
        rev[i] = s1[len - 1 - i];
    rev[len] = '\0';
    printf("\nReversed string = %s", rev);

    // iv) Palindrome (Checked before equality to match sample output flow)
    if (strcmp(s1, rev) == 0)
        printf("\nThe string is a Palindrome");
    else
        printf("\nThe string is not a Palindrome");

    // iii) Equality check
    if (strcmp(s1, s2) == 0)
        printf("\nStrings are equal");
    else
        printf("\nStrings are not equal");

    // v) Check substring
    if (strstr(s1, s2) != NULL)
        printf("\nSubstring found in main string\n");
    else
        printf("\nSubstring not found\n");

    return 0;
}