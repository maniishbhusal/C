// Recursive function to calculate the nth Fibonacci number.
#include <stdio.h>

int fibo(int num)
{
    // Base cases: F(0) = 0, F(1) = 1
    if (num <= 1)
        return num;
    
    // Recursive case: F(n) = F(n-1) + F(n-2)
    return fibo(num - 1) + fibo(num - 2);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Calculate and print the nth Fibonacci number
    printf("%d", fibo(n));
    
    return 0;
}
