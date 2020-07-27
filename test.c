#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int spaces;
    int dashes;

    do
    {
        printf("Height:");
        height = get_int(" ");
    }
    while (height <= 0 || height >= 8);
    for (int i = 1; i <= height; i++)
    {

        for (spaces = (height - i); spaces >= 0; spaces--)
        {
            printf(" ");
        }
        for (dashes = 1; dashes <= (i + 1); dashes++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}