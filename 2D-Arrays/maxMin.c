#include <stdio.h>

int main()
{
    // Declare a 2D array
    int arr[2][2];

    // Input elements for the matrix
    printf("Enter details for matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Initialize variables to store max and min values
    int max = arr[0][0], min = arr[0][0];
    int maxIndexRow = 0, maxIndexCol = 0, minIndexRow = 0, minIndexCol = 0;

    // Find the maximum and minimum elements in the matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Update max if current element is greater
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                maxIndexRow = i;
                maxIndexCol = j;
            }

            // Update min if current element is smaller
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                minIndexRow = i;
                minIndexCol = j;
            }
        }
    }

    // Output the results with index as (row, col)
    printf("The minimum element is %d and it is in index (%d, %d).\n", min, minIndexRow, minIndexCol);
    printf("The maximum element is %d and it is in index (%d, %d).\n", max, maxIndexRow, maxIndexCol);

    return 0;
}
