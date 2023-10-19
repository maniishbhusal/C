// Given an array containing elements from 1 to 'N' except one element in this range is missing. Find the missing element.
#include <stdio.h>
#define N 5

int main()
{
    int arr[N - 1] = {1, 2, 5, 4};
    int sum = 0, expectedSum = 0;

    // Calculate the sum of elements in the array
    for (int i = 0; i < N - 1; i++)
        sum += arr[i];

    // Calculate the expected sum of elements from 1 to N
    for (int i = 1; i <= N; i++)
        expectedSum += i;

    // The missing element is the difference between the expected sum and the actual sum
    printf("The missing element is %d.", expectedSum - sum);

    return 0;
}
