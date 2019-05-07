#include <cs50.h>
#include <stdio.h>

// create a function isLeapYear
// returns a bool
// accepts an int
// leap year is every 4 years unless divisible by 100
// but IS if it is divisible by 400

void isLeapYear(int x)
{
    if (x % 400 == 0)
    {
        printf("true\n");
    }
    else if (x % 100 == 0)
    {
        printf("false\n");
    }
    else if (x % 4 == 0)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
}

int main(void)
{
    int year = get_int("Enter a year: ");
    isLeapYear(year);
}