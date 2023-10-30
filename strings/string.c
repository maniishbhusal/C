#include <stdio.h>

int main()
{
    // Declare and initialize a character array
    char str[] = "My name is Manish Bhusal."; // The '\0' is optional in the initialization

    // Iterate through the array and print each character
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }

    // Print a newline for better formatting
    printf("\n");

    return 0;
}
