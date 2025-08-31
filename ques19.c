//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter 1st side: ");
    scanf("%d", &a);

    printf("Enter 2nd side");
    scanf("%d", &b);

    printf("Enter 3rd side");
    scanf("%d",&c);
    
    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        if (a==b && b==c) {
            printf("Equilateral\n");
        } 
        else if (a==b||b==c||a==c) {
            printf("Isosceles\n");
        } 
        else {
            printf("Scalene\n");
        }
    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}
