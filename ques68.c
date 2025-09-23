//Delete an element from an array.

#include <stdio.h>

int main() {
    int arr[100]; 
    int size, position;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete (1 to %d): ", size);
    scanf("%d", &position);

    if (position < 1 || position > size) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = position - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;  

    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

