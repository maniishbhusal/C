/* Rotate the given array 'arr' by k steps, where k is non-negative.
 Note: k can be greater than 'n' as well where 'n' is the size of array 'a' */

#include <stdio.h>
#define N 5

void reverse(int arr[], int si, int ei)
{
    // Reverse the array elements from index si to ei
    for (int i = si, j = ei; i < j; i++, j--)   // si-starting index, ei-ending index
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int arr[N], k;

    // Input array elements
    printf("Enter an array of numbers: \n");
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    printf("\nIn how many steps do you want to rotate the given array? ");
    scanf("%d", &k);

    // Adjust k to be within the size of the array
    k %= N;

    // Rotate the array
    reverse(arr, 0, N - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, N - 1);

    // Display the rotated array
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);

    return 0;
}
