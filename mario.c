#include <cs50.h>
#include <stdio.h>

int main(void)
{
//Declaring a variable
int height;
do
{
    //Asking the user to write in a height
     height = get_int("Please put in a height:");
   }
   //Loop through the and se if the height given by the user is between the threshold given.

    while (height < 1 || height > 8);
    for (int i = 0; i < height; i++)
    //creating the space for the hash symbols to the right
    {
        for (int sp = height - i; sp > 1; sp--)
        {
            printf(" ");
        }
        //
        for (int hashes = 0; hashes < i + 1; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}
