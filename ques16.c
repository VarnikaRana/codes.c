//Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("enter num2:");
    scanf("%d",&num2);

    printf("enter num3:");
    scanf("%d",&num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest number.\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the largest number.\n", num2);
    }
    else {
        printf("%d is the largest number.\n", num3);
    }

    return 0;
}

