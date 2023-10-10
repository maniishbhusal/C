// Calculate the binomial coefficient "n choose r" (nCr)
// Formula: nCr = n! / (r! * (n-r)!)

#include <stdio.h>

// Function to calculate the factorial of a given number
int factorial(int num)
{
    int fact = 1;
    
    // Calculate factorial using a loop
    for (int i = num; i > 1; i--)
    {
        fact *= i;
    }
    
    return fact;
}

// Main function
int main()
{
    // Declare variables to store user input
    int n, r;
    
    // Prompt the user to enter the values of n and r
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Enter r: ");
    scanf("%d", &r);
    
    // Calculate nCr using the factorial function
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    
    // Display the result
    printf("The nCr value is %d.", ncr);
    
    return 0;
}
