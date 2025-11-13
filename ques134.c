//Write a C program to find the factorial of a given number using recursion.

#include <stdio.h>

long long factorial(int n);

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative numbers does not exist.\n");
    } else {
        printf("Factorial of %d = %lld\n", num, factorial(num));
    }

    return 0;
}

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;  
    else
        return n * factorial(n - 1);  
}
