//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>
#include <stdlib.h>

int main() {
    char source[100], destination[100];
    FILE *srcFile, *destFile;
    int ch;

    printf("Enter the source filename: ");
    scanf("%s", source);

    printf("Enter the destination filename: ");
    scanf("%s", destination);

    srcFile = fopen(source, "r");
    if (srcFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    destFile = fopen(destination, "w");
    if (destFile == NULL) {
        perror("Error opening destination file");
        fclose(srcFile);
        return 1;
    }

    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully!\n");

    fclose(srcFile);
    fclose(destFile);

    return 0;
}
