//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        int prod = 1;
        for (j = 0; j < n; j++) {
            if (i != j) {
                prod *= nums[j];
            }
        }
        answer[i] = prod;
    }

    printf("Output:\n");
    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1)
            printf(" ");
    }

    return 0;
}
