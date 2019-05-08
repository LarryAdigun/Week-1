#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
  //Glo scope for the variables
    int counter;
    float change;
    int cents;
//Asking the user to input a float for the change that is due
    do
    {

        change = get_float("How much change is owed?: ");

    } while (change <= 0);
    cents = round(change * 100);

    //counting the number of coins
    counter = 0;

    while ((cents / 25) > 0)
    {
        cents -= 25;
        counter++;
    }
    while ((cents / 10) > 0)
    {
        cents -= 10;
        counter++;
    }
    while ((cents / 5) > 0)
    {
        cents -= 5;
        counter++;
    }
    while ((cents / 1) > 0)
    {
        cents -= 1;
        counter++;
    }


    printf("%i\n", counter);
}
