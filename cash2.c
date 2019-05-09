#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("How much change are you owed?:"); //Ask the user to plug in how much change is owed
    }
    while (dollars < 0); // If the user plugs in a neg # goes back to the top
    int cents = round(dollars * 100);

    int coins = 0; //counter for the numbe of coins
    while (cents >= 25) // loop evaluates only when the cents is greater than 25. For example 35-25 = 10 loop ended.
    {
        cents -= 25;
        coins++;
    }
    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }

    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }