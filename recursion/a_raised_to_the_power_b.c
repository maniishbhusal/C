// Recursive function to calculate 'a' raised to the power 'b'.
#include <stdio.h>

int power(int a, int b)
{
    // Base case: any number raised to the power of 0 is 1
    if (b == 0)
    {
        return 1;
    }
    
    // Recursive case: a^b = a * a^(b-1)
    return a * power(a, b - 1);
}

int main()
{
    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter exponent: ");
    scanf("%d", &b);
    
    // Calculate and display the result
    int result = power(a, b);
    printf("The result is %d", result);
    
    return 0;
}
