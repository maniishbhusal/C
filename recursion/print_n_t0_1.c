#include <stdio.h>

// Recursive function to print numbers from N to 1
void printNto1(int num)
{
    // Base case: if the number is 0, stop the recursion
    if (num == 0)
        return;

    // Print the current number
    printf("%d\n", num);

    // Recursively call the function with num-1
    printNto1(num - 1);

    return;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Call the recursive function to print numbers from N to 1
    printNto1(n);

    return 0;
}
