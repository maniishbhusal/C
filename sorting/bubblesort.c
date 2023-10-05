// Program for sorting elements of a one-dimensional array in ascending order

#include <stdio.h>

int main()
{
    int arr[100], num;

    // Read the number of elements
    printf("\nHow many numbers do you want to sort?: ");
    scanf("%d", &num);

    // Read the elements into an array
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Display the original order of the elements
    printf("\nThe numbers before sorting are:\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d\t", arr[i]);
    }

    // Bubble Sort algorithm
    for (int i = 0; i < num - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < num - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        // If no swapping occurred, the array is already sorted
        if (!flag)
            break;
    }

    // Display the elements in ascending order
    printf("\nThe numbers in ascending order are:\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
