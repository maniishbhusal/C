// Program to copy the contents of one array into another in reverse order.
#include <stdio.h>
#define N 5

int main()
{
    int arr[N], brr[N];

    // Input array elements
    printf("Enter an array of numbers: \n");
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    // Display original array
    printf("\nOriginal Array\n");
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Copy elements in reverse order
    for (int i = 0; i < N; i++)
        brr[i] = arr[N - 1 - i];

    // Display reversed array
    printf("Reversed Array\n");
    for (int i = 0; i < N; i++)
        printf("%d ", brr[i]);

    return 0;
}
