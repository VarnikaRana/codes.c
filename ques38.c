// Q38: Write a program to find the sum of digits of a number.


#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    int digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}