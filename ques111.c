//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
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

    // Process each window
    printf("First negative integers in each window of size %d:\n", k);
    for (i = 0; i <= n - k; i++) {
        int found = 0;
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("0 ");
        }
    }

    printf("\n");
    return 0;
}
