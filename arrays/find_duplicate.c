// WAP to find a duplicate element from a given array of integers.
#include <stdio.h>
#include <stdbool.h>

// Function to find and print the duplicate element in the array.
void findDuplicate(int arr[], int size)
{
    bool found = false;

    // Nested loops to compare each element with every other element.
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            // If a duplicate is found, print it and set the found flag.
            if (arr[i] == arr[j])
            {
                printf("The duplicate element is %d.\n", arr[i]);
                found = true;
                break;
            }
        }
    }

    // If no duplicate is found, print a message.
    if (!found)
        printf("There is no any duplicate element in this array.");
}

// Main function to demonstrate the findDuplicate function.
int main()
{
    int arr[8] = {1, 2, 3, 4, 2, 6, 1, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    findDuplicate(arr, size);
    return 0;
}
