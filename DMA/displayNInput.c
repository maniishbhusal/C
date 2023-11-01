// WAP to take N number of integers as input and display them.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for N integers
    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error code
    }

    // Input and display N integers
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    // Display the entered integers
    printf("Entered integers: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    // Reallocate memory for 2N integers
    ptr = (int *)realloc(ptr, 2 * n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory reallocation failed.\n");
        free(ptr); // Free the previously allocated memory
        return 1;  // Exit the program with an error code
    }

    // Input and display additional N integers
    printf("\nEnter additional %d integers:\n", n);
    for (int i = n; i < 2 * n; i++)
    {
        scanf("%d", ptr + i);
    }

    // Display all entered integers
    printf("All entered integers: ");
    for (int i = 0; i < 2 * n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    // Free allocated memory
    free(ptr);

    return 0; // Exit the program successfully
}
