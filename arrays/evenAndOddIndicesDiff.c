// Find the difference between the sum of elements of at even indices to the sum of elements at odd indices.
#include <stdio.h>
#define N 6

int main()
{
    int arr[N], sumEven = 0, sumOdd = 0;

    // Input array elements
    printf("Enter an array of numbers: \n");
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    // Calculate the sum of elements at even and odd indices
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
            sumEven += arr[i];
        else
            sumOdd += arr[i];
    }

    // Find and display the difference
    printf("\nDifference: %d", sumEven - sumOdd);
    return 0;
}
