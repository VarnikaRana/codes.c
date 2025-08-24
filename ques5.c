//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main(){
    float c=40.0, f;

    f=(c*9/5)+32;

    printf("the change in temperature from celcius %f to farhaneit is %f", c,f);
    return 0;
}