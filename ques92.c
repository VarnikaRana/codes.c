//Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main() {
    char str[100];
    int freq[26] = {0};
    int i;
    char result = '\0';
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        freq[index]++;
        if(freq[index] == 2) { 
            result = str[i];
            break;
        }
    }
    if(result != '\0')
        printf("%c", result);
    else
        printf("No repeating character");
    return 0;
}
