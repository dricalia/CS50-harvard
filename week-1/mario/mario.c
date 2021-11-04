#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

// creating variables
int row = 1;
int height = 0;
int counter = 0;
int n = 0;

int main(void)
{   
    // assigning values
    height = get_positive_int();
    counter = n;

    // creating the pyramid
    for (int e = 0; e < height; e++)
    {
        // creating blank spaces and hashtags
        for (int i = 0; i < height; i++)
        {
            if (e + i < counter - 1)
            {
                printf(" ");
            }

            else
            {
                char hash  = '#';
                printf("%c", hash);
            }
        }

        printf("\n");
    }
}

// taking a positive integer from the user
int get_positive_int(void)
{
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}
