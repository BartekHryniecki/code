#include <cs50.h>
#include <stdio.h>

int main (void)
{
    FILE *file = fopen("phonebook.csv", "a");

    string name = get_string("Name: ");
    string number = get_string("Number: ");

    fprintf(file, "%s, %s\n", name, number);

    fclose(file);


    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }
}