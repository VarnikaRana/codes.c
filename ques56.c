//Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int arr[100];
    int n, i;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size. Please enter a number between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
