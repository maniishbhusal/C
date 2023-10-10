#include <stdio.h>

// Recursive function to print numbers 1 to N.
void increasing(int n)
{
    // Base case: stop recursion when n becomes 0
    if (n == 0)
        return;

    // Recursive call with the next decremented value
    increasing(n - 1);

    // Print the current number after the recursive call (post-order)
    printf("%d\n", n);

    return;  // Optional, as the function has a void return type
}

int main()
{
    int n;
    
    // Read the value of N from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Call the recursive function to print numbers from N to 1
    increasing(n);

    return 0;
}
