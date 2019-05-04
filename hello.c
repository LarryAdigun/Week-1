#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get name from user
    string name = get_string("Enter Name:\n");
    //print name of user
    printf("hello, %s\n", name);
}