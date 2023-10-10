#include <stdio.h>

// Recursive function to calculate the sum of numbers from 1 to N (Return type)
int factorialSum(int num)
{
    // Base case: when the number becomes 1, return 1
    if (num == 0 || num == 1)
        return 1;

    // Calculate the sum recursively by adding the current number to the sum of the rest
    int factoSum = num + factorialSum(num - 1);

    return factoSum; // Return the sum to the calling function
}

int main()
{
    int n;

    // Read the value of N from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Call the recursive function to calculate and print the sum
    int sum = factorialSum(n);
    printf("The sum is %d.", sum);

    return 0;
}
