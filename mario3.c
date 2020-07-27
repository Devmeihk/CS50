#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 0 || n > 8);
    for (int i = 0; i < n; i++)
    {
        for (int spaces = (n - i); spaces > 0; spaces--)
        {
            printf(" ");
        }
        for (int j = 0; j < i+1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}