//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int main() {
    int n, i;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize variables for Kadane's Algorithm
    int max_current = arr[0];
    int max_global = arr[0];

    for (i = 1; i < n; i++) {
        // Either start new subarray at arr[i] or extend previous subarray
        if (max_current < 0)
            max_current = arr[i];
        else
            max_current += arr[i];

        if (max_current > max_global)
            max_global = max_current;
    }

    // Print the maximum subarray sum
    printf("Maximum subarray sum is: %d\n", max_global);

    return 0;
}
