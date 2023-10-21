// WAP to change the given n*n matrix to its transpose.
#include <stdio.h>

int main()
{
    int n;

    // Get the number of rows/columns from the user
    printf("Enter the number of rows/columns: ");
    scanf("%d", &n);

    // Declare a matrix for the original
    int matrix[n][n];

    // Input values for the original matrix
    printf("\nEnter details for the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Compute the transpose of the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // Swap elements across the main diagonal
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Display the transposed matrix
    printf("\nTranspose of Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
