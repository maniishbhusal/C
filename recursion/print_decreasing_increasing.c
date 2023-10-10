#include <stdio.h>

// Recursive function to print decreasing and then increasing numbers up to N.
void decreasingIncreasing(int num)
{
    // Base case: stop recursion when the number becomes 0
    if (num == 0)
        return;

    // Print the decreasing sequence
    printf("%d\n", num);

    // Recursive call with the next decreasing value
    decreasingIncreasing(num - 1);

    // Print the increasing sequence after the decreasing sequence
    printf("%d\n", num);

    return;  // Optional, as the function has a void return type
}

int main()
{
    int n;

    // Read the value of N from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Call the recursive function to print decreasing and then increasing numbers
    decreasingIncreasing(n);

    return 0;
}
