/*Given an integer array arr, move all 0's to the end of it while maintaining the relative order
of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
*/
#include <stdio.h>

#define N 14

int main()
{
    // Given integer array
    int arr[N] = {0, 10, 0, 1, 0, 7, 0, 0, 0, 88, 92, 0, 35, 0};

    // Move all 0's to the end in-place using bubble sort
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (arr[j] == 0)
            {
                // Swap 0 with the next element
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the resulting array
    printf("Resulting Array: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
