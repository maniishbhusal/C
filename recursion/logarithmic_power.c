#include <stdio.h>

// Function to calculate 'a' raised to the power 'b' using recursion (Logarithmic Function)
int power(int a, int b)
{
    // Base case: any number raised to the power 0 is 1
    if (b == 0)
        return 1;

    // Recursive call: calculate power using half of the exponent
    int c = power(a, b / 2);

    // Check if the exponent is even or odd and compute accordingly
    if (b % 2 == 0)
        return c * c;
    else
        return c * c * a;
}

int main()
{
    int a, b;

    // Input: Get base and exponent from the user
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter exponent: ");
    scanf("%d", &b);

    // Calculate and display the result
    int result = power(a, b);
    printf("The result is %d", result);

    return 0;
}
