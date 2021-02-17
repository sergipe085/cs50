#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get start size from user
    int n;
    do
    {
        n = get_int("Start size: ");
    }
    while (n < 9);

    //Get end size from user
    int e;
    do
    {
        e = get_int("End size: ");
    }
    while (e < n);

    //Calculate number of years until we reach threshold
    int y = 0;
    while (n < e)
    {
        n += (n / 3) - (n / 4);
        y++;
    }

    //Print number of years
    printf("Years: %i\n", y);
}