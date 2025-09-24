//Find the second largest element in an array.

#include <stdio.h>

int main() {
    int arr[100];
    int size;

    printf("Enter number of elements (minimum 2): ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Array must contain at least two elements.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int largest, second;

    if (arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }

    for (int i = 2; i < size; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (largest == second) {
        printf("No distinct second largest element found.\n");
    } else {
        printf("Second largest element: %d\n", second);
    }

    return 0;
}
