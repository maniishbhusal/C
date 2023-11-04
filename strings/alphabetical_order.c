// WAP to read the name list of 20 students and display them in alphabetical form.
#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define NUM_STUDENTS 20

int main()
{
    // Declare an array to store names
    char names[NUM_STUDENTS][MAX_NAME_LENGTH];

    // Input names from the user
    printf("Enter names of 20 students:\n");
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Sort the names in alphabetical order
    for (int i = 0; i < NUM_STUDENTS - 1; i++)
    {
        for (int j = i + 1; j < NUM_STUDENTS; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                // Swap names if they are not in alphabetical order
                char temp[MAX_NAME_LENGTH];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Display names in alphabetical order
    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}
