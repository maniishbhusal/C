// WAP to print the row number having the maximum sum in a given matrix.
#include <stdio.h>

int main()
{
    // Define a 3x3 matrix
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Initialize variables to keep track of the maximum sum and its corresponding row index
    int maxSum = 0, rowIndex = 0;

    // Display the matrix
    printf("Given Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of each row and find the row with the maximum sum
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;

        // Calculate the sum of the current row
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }

        // Check if the current sum is greater than the maximum sum
        if (maxSum < sum)
        {
            maxSum = sum;
            rowIndex = i;
        }
    }

    // Display the result
    printf("The maximum sum is %d and it is in index %d.", maxSum, rowIndex);

    return 0;
}
