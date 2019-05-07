#include <stdio.h>

int main (void) {
int integer;
int number;

    do {
         number = get_int("Enter time: ");
         integer = get_int("Enter Random Number: ");
        if (number >= 1 && number <= 12) {
            int hours =  (number + integer) % 12;
       } while (integer > 0);

//printf("time and number, %i\n", number, integer);


    printf("The time is, %i\n", hours);

    }
}
