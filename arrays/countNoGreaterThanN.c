// Count the number of elements in given array greater than a given number X.
#include <stdio.h>

int main()
{
    int arr[5], count = 0, n;

    // Input numbers into the array
    printf("Enter numbers in an array:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    // Input the number to compare
    printf("Enter a number you want to compare: ");
    scanf("%d", &n);

    // Count elements greater than the given number
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > n)
            count += 1;
    }

    // Display the result
    printf("\nThere are %d elements greater than %d in the given array.", count, n);
    return 0;
}
