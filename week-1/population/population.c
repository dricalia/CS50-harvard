#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Variables
    int startSize;
    int endSize;

    // TODO: Prompt for start size
    do
    {
        startSize = get_int("Start size: ");
    }
    while (startSize < 9);


    // TODO: Prompt for end size
    do
    {
        endSize = get_int("End size: ");
    }
    while (endSize < startSize);

    // TODO: Calculate number of years until we reach threshold
    int population = startSize;
    int years = 0;
    do
    {
        population = population + (population / 3 - population / 4);
        years = years + 1;

    }
    while (population < endSize);



    // TODO: Print number of years
    printf("Years: %i\n", years);

}
