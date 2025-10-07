//Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int isRotation(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return 0;
    }


    char concat[2 * len1 + 1]; 
    strcpy(concat, str1);
    strcat(concat, str1);

    return strstr(concat, str2) != NULL;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    if (isRotation(str1, str2)) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are NOT rotations of each other.\n");
    }

    return 0;
}
