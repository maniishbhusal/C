/*
Inserting a Character in a String
Write a function to insert a new character in a string at a given position.
*/
#include <stdio.h>
#include <string.h>

// Function to insert a character into a string at a given position
void insertingCharToStr(char c, int index, char str[])
{
    printf("Original String: %s\n", str);

    int len = strlen(str);

    // Shift characters to make space for the new character
    for (int i = len; i >= index; i--)
    {
        str[i + 1] = str[i];
    }

    // Insert the new character at the specified index
    str[index] = c;

    // Display the modified string
    printf("Modified String: %s\n", str);
}

int main()
{
    char str[50];
    int index;
    char c;

    // Input the original string
    printf("Enter a string: ");
    scanf("%s", str);

    // Input the character and index
    printf("Enter a character you want to add and the index number in the string (character index): ");
    scanf(" %c %d", &c, &index); // Note the space before %c to consume the newline character

    // Call the function to insert the character into the string
    insertingCharToStr(c, index, str);

    return 0;
}
