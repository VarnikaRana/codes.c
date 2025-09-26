//Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows = 3;
    int cols = 3;

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rowSums[3] = {0};

    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        rowSums[i] = sum;
    }

    printf("Row sums:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i, rowSums[i]);
    }

    return 0;
}
