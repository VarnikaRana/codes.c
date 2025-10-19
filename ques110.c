//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>

int main() {
    int n, k, i, j;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input window size k
    printf("Enter the size of subarray (k): ");
    scanf("%d", &k);

    // Validate k
    if (k > n || k <= 0) {
        printf("Invalid window size.\n");
        return 1;
    }

    // Process each subarray of size k
    printf("Maximum elements in each subarray of size %d:\n", k);
    for (i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (j = 1; j < k; j++) {
            if (arr[i + j] > max) {
                max = arr[i + j];
            }
        }
        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
