/* Create a structure 'date' that contains three members namely day, month and year. Create 2 structure
variables with different dates and now compare the two. If the dates are equal then display message as
"Equal" otherwise "Unequal"
*/
#include <stdio.h>

// Define a structure 'Date' that contains day, month, and year
typedef struct
{
    int day;
    int month;
    int year;
} Date;

int main()
{
    // Create two instances of the 'Date' structure
    Date a = {2, 6, 1902};
    Date b = {2, 6, 2002};

    // Compare the two dates and display the result
    if (a.day == b.day && a.month == b.month && a.year == b.year)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Unequal\n");
    }

    return 0;
}
