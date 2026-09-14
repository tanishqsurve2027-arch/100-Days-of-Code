/* Q72 (2D Arrays)
Find the sum of all elements in a matrix. */

#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;
    int matrix[20][20];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("Sum of all elements in the matrix: %d\n", sum);

    return 0;
}