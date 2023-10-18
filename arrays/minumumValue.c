// Find the minumum value out of all the elements in the array.
#include <stdio.h>
#define N 5

int main() {
    int arr[N], min;

    // Input array elements
    printf("Enter array of numbers: \n");
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    // Find the minumum value in the array
    min = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] < min)
            min = arr[i];
    }

    // Display the minumum value
    printf("The minumum value in the array is %d.\n", min);

    return 0;
}
