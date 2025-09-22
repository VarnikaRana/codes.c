//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

void insertSorted(int arr[], int *size, int capacity, int element) {
    if (*size >= capacity) {
        printf("Cannot insert: array is full.\n");
        return;
    }

    int i = *size - 1;

    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = element;

    (*size)++;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int capacity = 20;
    int arr[20] = {2, 5, 8, 12, 16, 23, 38};
    int size = 7;

    int element = 15;

    printf("Original array:\n");
    printArray(arr, size);

    insertSorted(arr, &size, capacity, element);

    printf("Array after inserting %d:\n", element);
    printArray(arr, size);

    return 0;
}
