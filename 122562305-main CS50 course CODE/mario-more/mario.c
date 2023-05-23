#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for the height
    int n;
    do
    {
        n = get_int("Height: ");
    } while (n > 8 || n < 1);

    //TODO: create brics

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
            printf(" ");

        for (int j = 0; j <= i; j++)
            printf ("#");

        printf ("  ");

        for (int a = 0; a <= i; a++)
            printf ("#");

        printf("\n");
    }
}