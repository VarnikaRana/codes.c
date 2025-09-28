//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
#include <stdbool.h>

#define MAX 100  

bool areDiagonalElementsDistinct(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return false;  
            }
        }
    }
    return true; 
}

int main() {
    int matrix[MAX][MAX];
    int n;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (areDiagonalElementsDistinct(matrix, n)) {
        printf("Diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are NOT distinct.\n");
    }

    return 0;
}
