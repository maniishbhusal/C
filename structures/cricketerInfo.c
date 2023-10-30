/*A record contains name of cricketer, his age, number of test matches that he has played and the
average runs that he has scored in each test match. Create an array of structure to hold
records of 20 such cricketer and then write a program to read these records.*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    int age;
    int test_matches;
    int runs;
} Cricketer;

int main()
{
    Cricketer arr[5];

    printf("Register your details:\n");

    for (int i = 0; i < 5; i++)
    {
        // Use fgets instead of gets to avoid buffer overflow issues
        printf("Enter your name: ");
        fgets(arr[i].name, sizeof(arr[i].name), stdin);

        printf("Enter your Age: ");
        scanf("%d", &arr[i].age);

        printf("Enter no of test matches: ");
        scanf("%d", &arr[i].test_matches);

        printf("Enter total runs: ");
        scanf("%d", &arr[i].runs);

        // Clear the input buffer after each scanf
        while (getchar() != '\n');
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Name: %s", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("Test Matches: %d\n", arr[i].test_matches);
        printf("Total Runs: %d\n", arr[i].runs);
        printf("\n");
    }

    return 0;
}
