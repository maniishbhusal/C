#include <stdio.h>
#include <stdbool.h>

void findUnique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool unique = true; 

        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j]) // Avoid comparing an element with itself
            {
                unique = false;
                break; // No need to continue checking if a duplicate is found
            }
        }

        if (unique)
        {
            printf("%d is the unique element in this array.", arr[i]);
            return; // Exit the function once a unique element is found
        }
    }

    printf("There is no any unique element in this array.");
}

int main()
{
    int arr[8] = {6, 7, 3, 4, 4, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    findUnique(arr, size);
    return 0;
}
