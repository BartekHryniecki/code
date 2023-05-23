#include <cs50.h>
#include <stdio.h>

float half(float bill_amount, float tax_percent, int tip_percent);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// Complete the function
float half(float bill_amount, float tax_percent, int tip_percent)
{
    float tax = ((float)tax_percent / 100) * (float)bill_amount;
    float bill = (float)bill_amount + (float)tax;
    float tip = ((float)tip_percent / 100) * (float)bill;
    float total = (float)bill + (float)tip;
    return (float)total / 2;
}