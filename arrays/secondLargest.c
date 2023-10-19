// Find the second largest element in the given Array.
#include <stdio.h>
#include <limits.h>
#define N 5

int main()
{
    int arr[N];

    // Input array elements
    printf("Enter an array of numbers: \n");
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    int max = arr[0];

    // Find the maximum element in the array
    for (int i = 1; i < N; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    // Initialize the second largest to be the minimum value
    int secondMax = INT_MIN;    // INT_MIN = -2147483648

    // Find the second largest element
    for (int i = 0; i < N; i++)
    {
        if (arr[i] != max && arr[i] > secondMax)
            secondMax = arr[i];
    }

    // Print the results
    printf("The largest number is %d.\n", max);
    printf("The second largest number is %d.", secondMax);

    return 0;
}
