// Check if the given array is a palindrome.
#include <stdio.h>
#define N 5

void checkPalindrome(int arr[])
{
    int palindrome = 1;

    // Compare elements from start and end towards the center
    for (int i = 0, j = N - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            palindrome = 0;
            break;
        }
    }

    // Display result
    if (palindrome)
        printf("The array is a palindrome.");
    else
        printf("The array is not palindrome.");
}

int main()
{
    int arr[N];

    // Input array elements
    printf("Enter an array of numbers: \n");
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    // Check and display result
    checkPalindrome(arr);
}
