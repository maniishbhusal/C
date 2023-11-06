/*Given an integer array arr, move all 0's to the end of it while maintaining the relative order
of the non-zero elements.*/
#include <stdio.h>

#define N 5

int main()
{
    // Given integer array
    int arr[N] = {0, -2, 44, 1, 0};
    int arr2[N];   // Array to store result
    int index = 0; // Index for non-zero elements

    // Loop through the array to find non-zero elements
    for (int i = 0; i < N; i++)
    {
        if (arr[i] != 0)
        {
            arr2[index] = arr[i]; // Store non-zero element in arr2
            index += 1;
        }
    }

    // Fill the remaining elements with zeros
    while (index != N)
    {
        arr2[index] = 0;
        index++;
    }

    // Print the result
    printf("Resulting Array: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
