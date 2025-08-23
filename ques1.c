//write a program to input two numbers and display their sum

#include<stdio.h>

int main(){
    int a, b, sum;

    printf("enter first number");
    scanf("%d", &a);

    printf("enter second number");
    scanf("%d", &b);

    sum= a+b;

    printf("the sum of a %d and b %d is %d",a,b,sum);
    return 0;

}