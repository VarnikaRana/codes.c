#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Read string with spaces

    // Remove the newline character at the end (if present)
    name[strcspn(name, "\n")] = '\0';

    printf("\nHello, %s!\n", name);

    // Find string length
    int length = strlen(name);
    printf("Your name has %d characters.\n", length);

    // Convert to uppercase
    for (int i = 0; name[i]; i++) {
        name[i] = toupper(name[i]);
    }

    printf("Your name in uppercase: %s\n", name);

    return 0;
}
