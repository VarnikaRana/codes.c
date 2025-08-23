//Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>

int main(){
    float radius, area, circumference;

    printf("enter radius");
    scanf("%f", &radius);

    area= 3.14*radius*radius;
    circumference=2*3.14*radius;

    printf("the area of the circle of radius %f is %f\n", radius, area),
    printf("the circumference of the circle of radius %f is %f",radius, circumference);

    return 0;
}