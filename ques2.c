//write a program to input two numbers and display their sum, difference, product and quotient.

#include<stdio.h>

int main(){
    int num1, num2, sum, difference, product;
    float quotient;

    printf("enter first number");
    scanf("%d", &num1);

    printf("enter second number");
    scanf("%d", &num2);

    sum= num1+num2;
    difference= num1-num2;
    product= num1*num2;
    quotient= num1/num2;

    printf("the sum of num1 %d and num2 %d is %d\n", num1, num2, sum);
    printf("the difference of num1 %d and num2 %d is %d\n", num1, num2, difference);
    printf("the product of num1 %d and num2 %d is %d\n", num1, num2, product);
    printf("the quotient of num1 %d and num2 %d is %f", num1, num2, quotient);

    return 0;
}

