#include <cs50.h>
#include <stdio.h>

long get_input(void);
int credit_lenght(long credit);
int credit_validation(long credit);
int credit_determination(long credit);
int main(void)
{
    long credit = get_input();
    int lenght = credit_lenght(credit);

    if (lenght == 13 || lenght == 15 || lenght == 16)
    {
        credit_validation(credit);
    }
    else
    {
        printf("INVALID\n");
    }
}

long get_input(void)
{
    long number = get_long("Number: ");
    return number;
}

int credit_lenght(long credit)
{
    int lenght = 0;
    while (credit > 0)
    {
        credit = credit / 10;
        lenght++;
    }
    return lenght;
}

int credit_validation(long credit)
{
    int sum1 = 0;
    int sum2 = 0;
    int x1 = 0;
    int sum3 = 0;
    int x2 = 0;
    int a2 = 0;
    int b2 = 0;
    long credit1 = credit;

    while (credit1 > 0)
    {
        x1 = credit1 % 10;
        credit1 = credit1 / 10;
        sum2 = sum2 + x1;

        x2 = credit1 % 10;
        credit1 = credit1 / 10;
        x2 = 2 * x2;
        a2 = x2 % 10;
        b2 = x2 / 10;
        sum3 = sum3 + a2 + b2;
    }
    sum1 = sum2 + sum3;
    sum1 = sum1 % 10;

    if (sum1 == 0)
    {
        credit_determination(credit);
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}

int credit_determination(long credit)
{
    while (credit > 100)
    {
        credit = credit / 10;
    }
    if (credit == 34 || credit == 37)
    {
        printf("AMEX\n");
    }
    else if (credit == 51 || credit == 52 || credit == 53 || credit == 54 || credit == 55)
    {
        printf("MASTERCARD\n");
    }
    else
    {
        credit = credit / 10;
        if (credit == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    return 0;
}