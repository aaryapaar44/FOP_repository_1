#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourcePath[100], destPath[100];
    char ch;

   
    printf("Enter source file name: ");
    scanf("%s", sourcePath);
    printf("Enter destination file name: ");
    scanf("%s", destPath);

    
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file %s\n", sourcePath);
        exit(1);
    }

    
    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        fclose(sourceFile); // Close source before exiting
        printf("Error: Could not open destination file %s\n", destPath);
        exit(1);
    }

    
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}