#include <cs50.h>
#include <stdio.h>

float total_cost(float bill_amount, float tax_percent, int tip_percent);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", total_cost(bill_amount, tax_percent, tip_percent)/2);
}

// Complete the function
float total_cost(float bill_amount, float tax_percent, int tip_percent)
{
    float tax = (tax_percent/100) * bill_amount;
    float tip = (tip_percent/100) * bill_amount;
    float total = bill_amount + tax + tip;
    return total;
}
