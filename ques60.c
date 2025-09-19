//Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            positiveCount++;
        else if(arr[i] < 0)
            negativeCount++;
        else
            zeroCount++;
    }

    printf("Number of positive numbers: %d\n", positiveCount);
    printf("Number of negative numbers: %d\n", negativeCount);
    printf("Number of zeros: %d\n", zeroCount);

    return 0;
}
