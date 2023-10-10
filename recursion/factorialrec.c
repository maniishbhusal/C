#include <stdio.h>

// Recursive function to calculate the factorial of a number.
int factorial(int n) {
    // Base case: factorial of 0 and 1 is 1.
    if (n == 0 || n == 1)
        return 1;

    // Recursive call to calculate factorial.
    int recAns = n * factorial(n - 1);

    // Return the result of the recursive call.
    return recAns;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the factorial function and store the result.
    int fact = factorial(num);

    // Display the result.
    printf("The factorial of %d is %d.", num, fact);
    return 0;
}
