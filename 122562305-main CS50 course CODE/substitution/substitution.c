#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution KEY\n");
        return 1;
    }

        for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Usage: ./substitution KEY");
            return 1;
        }
    }

        if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    string plaintext = get_string("Plaintext: ");
    printf("Ciphertext: ");

    for (int j = 0; j < strlen(plaintext); j++)
    {
        if (isupper(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 65 = argv[1][j]));
        }

        else if (islower(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 97 = argv[1][j]));
        }

        else
        {
            printf("%c", plaintext[j] = argv[1][j]);
        }
    }

}