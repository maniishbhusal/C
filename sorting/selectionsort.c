#include <stdio.h>

#define N 7

int main()
{
    int arr[N];

    // Input elements into the array
    printf("Enter elements in array:\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Display the array before sorting
    printf("Array before sorting:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", arr[i]);
    }

    // Selection sort algorithm to sort the array in ascending order
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            // Find the minimum element in the unsorted part
            int min = arr[i];

            // Swap if the element at index j is smaller than the current minimum
            if (arr[j] < min)
            {
                int temp = arr[j];
                arr[j] = min;
                arr[i] = temp;
            }
        }
    }

    // Display the sorted array
    printf("\nSorted Array:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
