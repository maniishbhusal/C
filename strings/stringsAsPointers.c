#include <stdio.h>

int main()
{
    // Declare a string array and initialize it with the string "Manish Bhusal".
    char str[] = "Manish Bhusal";

    // Declare a character pointer and initialize it to point to the first character in the string array.
    char *ptr = str;

    // Print the address of the first character in the string array.
    printf("%p\n", ptr);

    // Iterate over the string array until the null terminator character is reached.
    while (*ptr != '\0')
    {
        // Print the current character to the console.
        printf("%c", *ptr);

        // Increment the pointer to the next character in the string array.
        ptr++;
    }

    return 0;
}
