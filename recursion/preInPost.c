#include <stdio.h>

/*
  Recursive function to print pre-order, in-order, and post-order traversal
  of numbers from n to 1.
*/
void preInPost(int n)
{
    // Base case: stop recursion when n becomes 0
    if (n == 0)
        return;

    // Pre-order: print the current value before recursive calls
    printf("Pre: %d\n", n);

    // Recursive call for in-order traversal
    preInPost(n - 1);

    // In-order: print the current value between recursive calls
    printf("In %d\n", n);

    // Recursive call for another in-order traversal
    preInPost(n - 1);

    // Post-order: print the current value after recursive calls
    printf("Post %d\n", n);

    return;
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // Call the recursive function to print pre-order, in-order, and post-order traversal
    preInPost(n);

    return 0;
}
