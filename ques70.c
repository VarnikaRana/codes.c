//Rotate an array to the right by k positions.

#include <stdio.h>

void rightRotateByOne(int arr[], int size) {
    int last = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

void rightRotate(int arr[], int size, int k) {
    k = k % size;  // In case k > size
    for (int i = 0; i < k; i++) {
        rightRotateByOne(arr, size);
    }
}

int main() {
    int arr[100];
    int size, k;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    rightRotate(arr, size, k);

    printf("Array after rotating right by %d positions:\n", k);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
