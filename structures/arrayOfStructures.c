#include <stdio.h>
#include <string.h>

// Define a structure type 'Pokemon'
typedef struct
{
    int attack;
    int hp;
    int speed;
    char tier;
    char name[20];
} Pokemon;

int main()
{
    // Declare an array of 'Pokemon'
    Pokemon arr[3];

    // Initialize the first Pokemon
    arr[0].attack = 12;
    arr[0].hp = 120;
    arr[0].speed = 14;
    arr[0].tier = 'A';
    strcpy(arr[0].name, "Pikachu");

    // Initialize the second Pokemon
    arr[1].attack = 2;
    arr[1].hp = 111;
    arr[1].speed = 114;
    arr[1].tier = 'B';
    strcpy(arr[1].name, "Charizard");

    // Initialize the third Pokemon
    arr[2].attack = 78;
    arr[2].hp = 132;
    arr[2].speed = 4;
    arr[2].tier = 'S';
    strcpy(arr[2].name, "Bulbasaur");

    // Display information for each Pokemon
    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\n", arr[i].name);
        printf("Attack: %d\n", arr[i].attack);
        printf("HP: %d\n", arr[i].hp);
        printf("Speed: %d\n", arr[i].speed);
        printf("Tier: %c\n", arr[i].tier);
        printf("\n");
    }

    return 0;
}
