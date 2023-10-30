#include <stdio.h>
#include <string.h>

int main()
{
    // Initialize strings
    char s1[200] = "Manish Bhusal";
    char s2[50];

    // Calculate the length of s1
    int len = strlen(s1);

    // Copy s1 to s2
    strcpy(s2, s1);

    // Display the length of s1
    printf("Length of s1: %d\n", len);

    // Display the contents of s2
    printf("Contents of s2: %s\n", s2);

    // Concatenate s2 to s1
    strcat(s1, s2);

    // Display the concatenated string
    printf("Concatenated string: %s\n", s1);

    return 0;
}
