// write a program to find and display the sum of first n natural numbers.

#include<stdio.h>

int main(){
    int n, sum=0;

    printf("enter the positive integer n:");
    scanf("%d",&n);

    sum=n*(n+1)/2;

    printf("the sum of n %d natural numbers is: %d",n, sum);

    return 0;
}