//Find the Sum of Elements in an Array

#include <stdio.h>

int findSum(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int total = findSum(arr, n);
    printf("Sum of elements = %d\n", total);
    
    return 0;
}
