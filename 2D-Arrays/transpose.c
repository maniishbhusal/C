// WAP to print the transpose of the matrix entered by the user
#include <stdio.h>

int main()
{
    int row, col;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    // Get the number of columns from the user
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    // Declare matrices for the original and transposed matrices
    int matrix[row][col], matrixTranspose[col][row];

    // Input values for the original matrix
    printf("\nEnter details for the matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Compute the transpose of the matrix
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            matrixTranspose[i][j] = matrix[j][i];
        }
    }

    // Display the transposed matrix
    printf("\nTranspose of Matrix:\n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", matrixTranspose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
