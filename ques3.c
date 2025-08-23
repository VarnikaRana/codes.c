//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>

int main(){
    int length, breadth, perimeter, area;

    printf("enter length");
    scanf("%d", &length);

    printf("enter breadth");
    scanf("%d", &breadth);

    area= length*breadth;
    perimeter=2*(length+breadth);

    printf("the area of rectangle of length %d and breadth %d is %d\n", length, breadth, area);
    printf("the perimeter of the rectangle of length %d and breadth %d is %d", length, breadth, perimeter);

    return 0;
}