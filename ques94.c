//Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    char longestWord[100];
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int i = 0, wordStart = 0, wordLen = 0;

    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\0') {
            wordLen++;
        } else {
            if (wordLen > maxLength) {
                maxLength = wordLen;
                strncpy(longestWord, &sentence[wordStart], wordLen);
                longestWord[wordLen] = '\0'; 
            }
            wordLen = 0;
            wordStart = i + 1;
        }

        if (sentence[i] == '\0')
            break;

        i++;
    }

    if (maxLength > 0) {
        printf("The longest word is: %s\n", longestWord);
        printf("Length: %d\n", maxLength);
    } else {
        printf("No words found.\n");
    }

    return 0;
}
