//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    char text[500];
    FILE *file;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    getchar();

    printf("Enter a line of text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, file);

    printf("Text appended successfully!\n");

    fclose(file);

    return 0;
}
