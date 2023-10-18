/* Given an array of integers, change the value of all odd indexed elements to its second multiple
and increment all even indexed value by 10. */

#include <stdio.h>

int main()
{
    int arr[5];

    // Input numbers into the array
    printf("Enter numbers in an array:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    // Display the original array
    printf("Original Array:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    printf("\n");

    // Modify array elements based on index
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
            arr[i] += 10;
        else
            arr[i] *= 2;
    }

    // Display the modified array
    printf("Modified Array:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
