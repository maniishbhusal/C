#include <stdio.h>

// Returns the minimum of two integers.
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

// Prints the highest common factor (HCF) of two integers.
int main()
{
    int a, b, hcf;

    // Prompt the user to enter two integers.
    printf("Enter two numbers: ");

    // Read the two integers from the user.
    scanf("%d %d", &a, &b);

    // Initialize the HCF to 1.
    hcf = 1;

    // Iterate from 1 to the minimum of the two integers.
    for (int i = 1; i <= min(a, b); i++)
    {
        // Check if the current number is a factor of both integers.
        if (a % i == 0 && b % i == 0)
        {
            // If so, update the HCF to the current number.
            hcf = i;
        }
    }

    // Print the HCF to the console.
    printf("HCF: %d\n", hcf);

    return 0;
}
