//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the size of subarray (k): ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 1;
    }

    int window_sum = 0;
    for (i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    int max_sum = window_sum;

    for (i = k; i < n; i++) {
        window_sum = window_sum - arr[i - k] + arr[i];
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    printf("Maximum sum of subarrays of size %d is: %d\n", k, max_sum);

    return 0;
}
