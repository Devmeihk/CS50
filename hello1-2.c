#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char name[50], location[50];
    printf("What's your name?");
    scanf("%s", &name);

    printf("Where are you from?");
    scanf("%d", location);

    printf("Hello %s", name);
    printf("You are from %d", location);

    return (0);
}