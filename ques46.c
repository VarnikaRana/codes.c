/*Write a program to print the following pattern:
*****
*****
*****
*****
***** */

#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for(i = 1; i <= 5; i++) {
        // Inner loop for columns
        for(j = 1; j <= 5; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}




