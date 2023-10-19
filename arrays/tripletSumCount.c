// Find the total number of triplets in the Array whose sum is equal to the given value x.
#include <stdio.h>
#define N 8

int main()
{
    int arr[N], count = 0, num;

    // Input array elements
    printf("Enter an array of numbers: \n");
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    // Input the number to compare
    printf("\nEnter a number to compare: ");
    scanf("%d", &num);

    // Find triplets with the sum equal to the given number
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {

                if (arr[i] + arr[j] + arr[k] == num)
                {
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                    count += 1;
                }
            }
        }
    }

    // Display the total number of triplets
    printf("Total number of pairs: %d", count);

    return 0;
}
