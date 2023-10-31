// Create a structure 'Person' having attributes as age and weight. Access its structure variables using pointers.
#include <stdio.h>

// Define a structure 'Person' with attributes age and weight
struct Person
{
    int age;
    float weight;
};

int main()
{
    // Create an instance of the Person structure
    struct Person benjamin;

    // Access structure variables using pointers
    struct Person *x = &benjamin;

    // Set values using pointers
    (*x).age = 22;     // we can also use x->age = 22; instead of (*x).age = 22;
    x->weight = 43.23; // (*x).something = x->something;

    // Print the address of the structure variable
    printf("Address of benjamin: %p\n", x);

    // Print the age using a pointer
    printf("Age: %d\n", (*x).age);

    // Print the weight using a pointer
    printf("Weight: %.2f\n", (*x).weight);

    return 0;
}
