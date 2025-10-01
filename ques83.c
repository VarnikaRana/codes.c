//Count vowels and consonants in a string.

#include <stdio.h>
#include <ctype.h>  // For tolower()

int main() {
    char str[1000];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  
        if (ch >= 'a' && ch <= 'z') {  
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
