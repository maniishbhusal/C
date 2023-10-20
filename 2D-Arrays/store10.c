// WAP to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
#include <stdio.h>

int main()
{
    // Declare a 2D matrix with 5 rows and 5 columns
    int arr[5][5];

    // Initialize each element of the matrix with the value 10
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = 10;
        }
    }

    // Display the matrix
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // Print the value at each index of the matrix
            printf("%d ", arr[i][j]);
        }

        // Move to the next line after printing elements in a row
        printf("\n");
    }

    return 0;
}
