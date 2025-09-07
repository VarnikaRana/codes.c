//Write a program to find the HCF (GCD) of two numbers.

#include<stdio.h>
int main(){
    int num1, num2;
    int i, hcf;

    printf("enter num1:");
    scanf("%d",&num1);

    printf("enter num2:");
    scanf("%d", &num2);

    int min = (num1 < num2) ? num1 : num2;
    for (i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}