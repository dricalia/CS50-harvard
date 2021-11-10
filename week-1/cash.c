#include <cs50.h>
#include <stdio.h>
#include <math.h>

// creating the main variables 
int coins = 0;
int cents = 0;
float dollar = 0;

// creating de variables of coins 
int cent_25 = 25;
int cent_10 = 10;
int cent_5 = 5;
int cent_1 = 1;


int main(void)
{
    // taking a float from the user
    do
    {
        dollar = get_float("Value: ");
    }
    while (dollar <= 0);

    // rounding and turning dollar into cents
    cents = round(dollar * 100);

    // greedy algorithm
    while (cents >= cent_25)
    {
        cents = cents - cent_25;
        coins++;
    }

    while (cents >= cent_10)
    {
        cents = cents - cent_10;
        coins++;
    }

    while (cents >= cent_5)
    {
        cents = cents - cent_5;
        coins++;
    }

    while (cents >= cent_1)
    {
        cents = cents - cent_1;
        coins++;
    }
    
    // result
    printf("Coins: %i", coins);
    printf("\n");

}
