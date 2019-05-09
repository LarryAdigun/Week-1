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