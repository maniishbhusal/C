// Reverse a string
#include <stdio.h>
#include <string.h>

int main()
{
    // Declare a character array to store the string
    char str[20];

    // Get input from the user
    printf("Enter a string that you want to reverse: ");
    gets(str);

    // Print the original string
    printf("Original String is: %s", str);

    // Get the length of the string
    int len = strlen(str);

    // Reverse the string using a loop
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        // Swap characters at positions i and j
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Print the reversed string
    printf("\nThe reversed string is: %s\n", str);

    return 0;
}
