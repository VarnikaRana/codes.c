//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    char *words[10];
    int wordCount = 0;

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    size_t len = strlen(name);
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    char *token = strtok(name, " ");
    while (token != NULL) {
        words[wordCount++] = token;
        token = strtok(NULL, " ");
    }

    printf("Formatted name: ");
    for (int i = 0; i < wordCount - 1; i++) {
        if (isalpha(words[i][0])) {
            printf("%c. ", toupper(words[i][0]));
        }
    }

    if (wordCount > 0) {
        printf("%s\n", words[wordCount - 1]);
    }

    return 0;
}
