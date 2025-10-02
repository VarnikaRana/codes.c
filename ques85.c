//Reverse a string.

#include <stdio.h>
#include <string.h> 

int main() {
    char str[1000];
    int i, len;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
