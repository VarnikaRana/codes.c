//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;  
    char ch;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (!isspace(ch) && inWord == 0) {
            inWord = 1; 
            words++;
        } else if (isspace(ch)) {
            inWord = 0;  
        }
    }

    fclose(file);

    printf("\nFile statistics:\n");
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return EXIT_SUCCESS;
}
