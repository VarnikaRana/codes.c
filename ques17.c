//Write a program to find the roots of a quadratic equation and categorize them.


#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    printf("Enter a: ");
    scanf("%lf", &a);

    printf("Enter b:");
    scanf("%d",&b);

    printf("Enter c:");
    scanf("%d",&c);

    if (a == 0) {
        printf("Not a quadratic equation (a cannot be 0).\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    printf("Discriminant: %.2f\n", discriminant);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
        printf("Category: Two distinct real roots\n");
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Root = %.2f\n", root1);
        printf("Category: One real root (repeated)\n");
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
        printf("Category: Two complex roots\n");
    }

    return 0;
}
