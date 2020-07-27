#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name? \n");
    printf("Hello, %s\n", name);

    string location = get_string("Where are you from %s?\n", name);
    printf("Hello %s from %s! Welcome to C with cs50\n", name, location);

    return(4);
}