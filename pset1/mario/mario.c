#include <cs50.h>
#include <stdio.h>

void createBlocks(int i, int n, bool l);
void createSpaces(int i, int n);

int main(void)
{
    //Get height from user
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    // --    ##################    -- //

    //create piramid
    for (int i = 1; i < n + 1; i++)
    {
        //Create left piramid
        createSpaces(i, n);
        createBlocks(i, n, true);

        //Create right piramid
        createBlocks(i, n, false);

        printf("\n");
    }
}

void createBlocks(int i, int n, bool l)
{
    //create block
    for (int j = 0; j < i; j++)
    {
        if (j == i - 1 && l)
        {
            printf("#  ");
            return;
        }
        printf("#");
    }
}

void createSpaces(int i, int n)
{
    //create blank spacements
    for (int l = 0; l < n - i; l++)
    {
        printf(" ");
    }
}