/* Create a structure type 'Person' with name, salary and age as its attributes. Declare and initialize
2 variables for this. Print the name of first person and age of the other. */
#include <stdio.h>
#include <string.h>

// Define a structure type 'Person' with name, salary, and age as attributes
struct Person
{
    char name[50];
    float salary;
    int age;
} a; // Declare and initialize a global variable 'a' of type 'Person'

int main()
{
    // Initialize attributes of the global variable 'a'
    strcpy(a.name, "Manish");
    a.salary = 22300.32;
    a.age = 25;

    // Declare and initialize a local variable 'b' of type 'Person'
    struct Person b = {"Benjamin", 2230.43, 30};

    // Print the name of the first person and the age of the other
    printf("Name: %s\n", a.name);
    printf("Age: %d\n", b.age);

    return 0;
}
