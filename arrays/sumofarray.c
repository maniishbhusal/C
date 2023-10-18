// Calculate the sum of all the elements in the given array.

#include <stdio.h>
#define N 5

int main() {
    int arr[N], sum = 0;

    // Input array elements
    printf("Enter array of numbers:\n", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    // Calculate the sum of array elements
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    
    // Display the total sum
    printf("The total sum is %d.\n", sum);

    return 0;
}
