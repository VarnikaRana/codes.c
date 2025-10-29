//Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int n) {
    int i, j, minIdx;
    for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(&arr[minIdx], &arr[i]);
    }
}

int main() {
    int n, k;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the value of k: ");
    scanf("%d", &k);
    
    sortArray(arr, n);
    
    if (k > 0 && k <= n)
        printf("The %dth smallest element is: %d\n", k, arr[k - 1]);
    else
        printf("Invalid value of k.\n");
    
    return 0;
}
