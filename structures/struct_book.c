#include <stdio.h>
#include <string.h>

// Define a structure type 'Book' with name, price, and number of pages as attributes
struct Book {
    char name[50];
    float price;
    int pages;
};

int main() {
    // Initialize instances of the 'Book' structure
    struct Book book1 = {"Think and Grow Rich", 104.23, 350};
    struct Book book2 = {"The Monk Who Sold His Ferrari", 204.23, 260};

    // Modify the name of book1 using strcpy
    strcpy(book1.name, "Seven Habits of Highly Effective People");

    // Display the information of the books
    printf("Book 1: %s %.2f %d\n", book1.name, book1.price, book1.pages);
    printf("Book 2: %s %.2f %d\n", book2.name, book2.price, book2.pages);

    return 0;
}
