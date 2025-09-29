//Perform diagonal traversal of a matrix.

#include <stdio.h>

void diagonalTraversal(int rows, int cols, int matrix[rows][cols]) {
        for (int d = 0; d < rows + cols - 1; d++) {
        int r, c;

        if (d % 2 == 0) {
            r = (d < rows) ? d : rows - 1;
            c = d - r;
            while (r >= 0 && c < cols) {
                printf("%d ", matrix[r][c]);
                r--;
                c++;
            }
        } else {
            c = (d < cols) ? d : cols - 1;
            r = d - c;
            while (c >= 0 && r < rows) {
                printf("%d ", matrix[r][c]);
                r++;
                c--;
            }
        }
    }
    printf("\n");
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Diagonal Traversal of the matrix is:\n");
    diagonalTraversal(3, 3, matrix);

    return 0;
}
