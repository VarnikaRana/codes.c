//Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // Read input with spaces

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Convert entire string to lowercase first
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }

    // Capitalize the first letter of the sentence if it’s alphabetic
    if (isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    // Capitalize the first letter after a period, question mark, or exclamation mark
    for (int i = 0; str[i]; i++) {
        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            // Skip spaces after punctuation
            int j = i + 1;
            while (str[j] == ' ') {
                j++;
            }
            if (isalpha(str[j])) {
                str[j] = toupper(str[j]);
            }
        }
    }

    printf("\nSentence case:\n%s\n", str);

    return 0;
}
