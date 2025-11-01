// Find Maximum and Minimum in an Array
#include <stdio.h>

int main() {
    int n;

    // Ask the user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    // Find max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // Output results
    printf("\nMaximum element = %d", max);
    printf("\nMinimum element = %d\n", min);

    return 0;
}
