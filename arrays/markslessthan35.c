/* Given an array of marks of students, if the mark of any student is less than 35, print its roll no.
[Roll Number here refers to the index of the array.] */

#include <stdio.h>
#define N 5

int main()
{
    int marks[N];

    // Input marks of students
    printf("Enter marks of %d students:\n", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &marks[i]);

    // Display students' marks
    printf("\nStudent's marks:\n");
    for (int i = 0; i < N; i++)
        printf("%d\t", marks[i]);

    printf("\n");

    // Check and print roll numbers of students with marks less than 35
    for (int i = 0; i < N; i++)
    {
        if (marks[i] < 35)
            printf("Student at roll no %d has marks less than 35.\n", i);
    }

    return 0;
}
