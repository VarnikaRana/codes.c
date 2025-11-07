//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;

    printf("Enter the filename: ");
    scanf("%99s", filename);  

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1; 
    }

    printf("\nContents of '%s':\n", filename);
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
