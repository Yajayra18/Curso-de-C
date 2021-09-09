#include <stdio.h>

/*
enum weekDays {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday,Sunday};

int main()
{
    enum weekDays today;
    today = Sunday;
    printf("Day %d", today+1);
    return 0;
}
*/
enum deck
{
    club = 0,
    dimonts = 5,
    hearts = 10,
    spades = 15,
} card;

int main()
{
    card = spades;
    printf("Card Power %d", card);
    return 0;
}