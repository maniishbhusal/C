// Given a matrix having 0-1 only, find the row with the maximum number of 1's.
#include <stdio.h>

int main()
{
    // Define a 3x3 matrix
    int arr[3][3] = {
        {1, 1, 0},
        {0, 0, 0},
        {0, 0, 1}};

    // Initialize variables to keep track of the maximum count of 1's and its corresponding row index
    int maxCount = 0, maxIndex = 0;

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

    // Calculate the count of 1's in each row and find the row with the maximum count
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            // Check if the element is 1
            if (arr[i][j] == 1)
                count++;
        }

        // Check if the current count is greater than the maximum count
        if (maxCount < count)
        {
            maxCount = count;
            maxIndex = i;
        }
    }

    // Display the result
    printf("The row with the maximum number of 1's is %dth row.\n", maxIndex);

    return 0;
}
