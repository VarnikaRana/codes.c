//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main() {
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter size of second array: ");
    scanf("%d", &n);

    int arr1[m], arr2[n], merged[m + n];

    printf("Enter %d sorted elements for first array: ", m);
    for (int i = 0; i < m; i++)
        scanf("%d", &arr1[i]);

    printf("Enter %d sorted elements for second array: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    while (i < m)
        merged[k++] = arr1[i++];

    while (j < n)
        merged[k++] = arr2[j++];

    printf("Merged sorted array: ");
    for (int i = 0; i < m + n; i++)
        printf("%d ", merged[i]);
    printf("\n");

    return 0;
}
