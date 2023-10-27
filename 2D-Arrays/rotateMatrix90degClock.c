// WAP to rotate a matrix 90deg clockwise

#include <stdio.h>

int main()
{
    // Declare a 3x3 matrix
    int matrix[3][3];

    // Input values for the matrix from the user
    printf("Enter details for the matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Transpose the matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            // Swap elements across the main diagonal
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Display the transposed matrix
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Reverse the elements in each row of the transposed matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0, k = 2; j < k; j++, k--)
        {
            // Swap elements within each row
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = temp;
        }
    }

    // Display the final result
    printf("\nReversed Transposed Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
