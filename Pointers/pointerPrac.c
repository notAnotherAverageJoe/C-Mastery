#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[20];
    int health;
    int strength;
    int agility;
    int mana;
} Hero;

// Function to deal damage to the hero
void damage(Hero *heroPointer)
{
    printf("You are attacked! You lose 25 points of health!\n");
    heroPointer->health -= 25;
}

int main()
{
    Hero rhogar = {"Rhogar", 100, 10, 5, 2};
    Hero *heroPointer = &rhogar; // Point to rhogar

    // Print initial hero stats
    printf("Hero Name: %s\n", heroPointer->name);
    printf("Health: %d\n", heroPointer->health);
    printf("Strength: %d\n", heroPointer->strength);
    printf("Agility: %d\n", heroPointer->agility);
    printf("Mana: %d\n", heroPointer->mana);

    // Call the damage function to reduce health
    damage(heroPointer);

    // Print updated health after attack
    printf("Updated Health: %d\n", heroPointer->health);

    return 0;
}
