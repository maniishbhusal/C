// Program to reverse the array in-place without using any extra array.
#include <stdio.h>
#define N 5

// Function to reverse the array in-place
void reverse(int arr[])
{
    int i = 0, j = N - 1;
    while (i < j)
    {
        // Swap elements at i and j
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int arr[N];

    // Input array elements
    printf("Enter an array of numbers: \n");
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    // Display original array
    printf("\nOriginal Array\n");
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Reverse the array
    reverse(arr);

    // Display reversed array
    printf("Reversed Array\n");
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);

    return 0;
}
