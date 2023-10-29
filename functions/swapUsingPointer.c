#include <stdio.h>

// Function to swap two integers
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    // Initialize two integers
    int a = 7, b = 4;

    // Display the original values
    printf("Original Values:\n");
    printf("a = %d and b = %d\n", a, b);

    // Swap the values using the swap function
    swap(&a, &b);

    // Display the values after swapping
    printf("\nValues after swapping:\n");
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    return 0;
}
