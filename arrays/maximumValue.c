// Find the maximum value out of all the elements in the array.
#include <stdio.h>
#define N 5

int main() {
    int arr[N], max;

    // Input array elements
    printf("Enter array of numbers: \n");
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    // Find the maximum value in the array
    max = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    // Display the maximum value
    printf("The maximum value in the array is %d.\n", max);

    return 0;
}
