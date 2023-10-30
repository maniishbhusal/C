/*Create a structure to specify data on students with these attributes: Roll number, Name, Department, Course,
Year of Joining. Create 2 structure variables. Now, create a function to check if two students have the same
Department. Pass the two structure variable as input to this function.*/

#include <stdio.h>
#include <string.h>

// Define a structure for Student
struct Student
{
    int roll_no;
    char name[30];
    char department[30];
    char course[50];
    int yearOfJoining;
};

// Function to check if two students have the same department
void checkSameDepartment(struct Student stu1, struct Student stu2)
{
    if (strcmp(stu1.department, stu2.department) == 0)
    {
        printf("Same department\n");
    }
    else
    {
        printf("Different department!\n");
    }
}

int main()
{
    // Create instances of the Student structure
    struct Student stu1 = {13, "Manish", "BCA", "Software Development", 2022};
    struct Student stu2 = {12, "Benjamin", "BCA", "Finance", 2020};

    // Call the function to check the department
    checkSameDepartment(stu1, stu2);

    return 0;
}
