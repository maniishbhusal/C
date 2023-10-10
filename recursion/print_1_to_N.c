// Recursive function to print numbers from 1 to N.
#include <stdio.h>

void print_1_to_N(int num, int inc)
{
    // Base case: stop recursion when inc exceeds num
    if (num < inc)
        return;

    // Print the current number
    printf("%d\n", inc);

    // Recursive call with the next incremented value
    print_1_to_N(num, inc + 1);

    return;  // Optional, as the function has a void return type
}

int main()
{
    int n, inc = 1;
    
    // Read the value of N from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Call the recursive function to print numbers from 1 to N
    print_1_to_N(n, inc);

    return 0;
}
