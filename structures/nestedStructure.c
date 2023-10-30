#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[20];
    int salary;
};

struct Organization
{
    char organization[20];
    long org_number;
    struct Employee employee;
};

int main()
{
    // Initialize an instance of the Organization structure
    struct Organization org = {"GriMan", 9898885885, {1, "Benjamin", 40000}};

    // Modify the employee name using strcpy
    strcpy(org.employee.name, "Benjamin Graham");

    // Print information about the organization and its employee
    printf("Organization Name: %s\n", org.organization);
    printf("Organization Number: %ld\n", org.org_number);
    printf("Employee ID: %d\n", org.employee.id);
    printf("Employee Name: %s\n", org.employee.name);
    printf("Employee Salary: %d\n", org.employee.salary);

    return 0;
}
