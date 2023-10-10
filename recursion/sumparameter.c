#include <stdio.h>

// Recursive function to calculate the sum of numbers from 1 to N.
void sum(int s, int num)
{
    // Base case: when the number becomes 0, print the sum and return
    if (num == 0)
    {
        printf("The sum is %d.", s);
        return;
    }

    // Add the current number to the sum and recursively call with the next number
    sum(s + num, num - 1);

    return;  // Optional, as the function has a void return type
}

int main()
{
    int n;

    // Read the value of N from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Call the recursive function to calculate and print the sum
    sum(0, n);

    return 0;
}
