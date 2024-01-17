#include <stdio.h>
#include <string.h>

struct Students
{
    int roll;
    char address[30];
    float marks;
};

int main()
{
    struct Students students[35], *ptr;
    ptr = students;
    printf("Enter details of students:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter roll no: ");
        scanf("%d", &(ptr + i)->roll);
        printf("Enter address: ");
        scanf(" %s", (ptr + i)->address);
        printf("Enter marks: ");
        scanf("%f", &(ptr + i)->marks);
    }

    printf("Studuents with greater than 250 marks:\n");
    for (int i = 0; i < 5-1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (strcmp((ptr + j)->address, (ptr + j + 1)->address) < 0)
            {
                struct Students temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    printf("Students with sorted address:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Roll: %d, Address: %s, Marks: %f\n", (ptr + i)->roll, (ptr + i)->address, (ptr + i)->marks);
    }

    return 0;
}
