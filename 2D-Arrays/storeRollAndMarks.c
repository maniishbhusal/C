// WAP to store roll no and marks obtained by 4 students side by side in a matrix.
#include <stdio.h>

int main()
{
    // Declare and initialize a matrix to store roll numbers and marks
    int arr[4][2] = {
        {44, 12},
        {32, 54},
        {23, 64},
        {12, 88}};

    // Loop through each student and their marks
    for (int i = 0; i < 4; i++)
    {
        // For each student, print their roll number and marks
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }

        // Move to the next line after printing marks for a student
        printf("\n");
    }

    return 0;
}
