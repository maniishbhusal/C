// Write a program to add two matrices.
#include <stdio.h>

int main()
{
    // Declare matrices for input and the sum
    int matrix[2][2], matrix2[2][2];

    // Input values for matrix1
    printf("Enter details for matrix1\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Input values for matrix2
    printf("\nEnter details for matrix2\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Display matrix1
    printf("\nMatrix 1\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Display matrix2
    printf("\nMatrix 2\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Calculate and display the sum of matrices
    printf("\nSum of matrices\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // sum[i][j] = matrix[i][j] + matrix2[i][j];
            printf("%d ", matrix[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
