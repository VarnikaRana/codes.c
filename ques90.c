//Q90: Toggle case of each character in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    scanf("%s", str);
    for (int i = 0; str[i]; i++)
        str[i] = islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
    printf("%s
", str);
    return 0;
}