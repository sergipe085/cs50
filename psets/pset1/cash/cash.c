#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int coins[] = { 25, 10, 5, 1 };

    //Get input from user
    float input;
    do
    {
        input = get_float("Change owed: ");
    }
    while (input < 0);


    //convert input dolar float to cents int
    int val = round(input * 100);
    int numCoins = 0;

    while (val > 0)
    {
        //count coins
        for (int i = 0; i < (int)(sizeof(coins) / sizeof(int)); i++)
        {
            if (val - coins[i] >= 0)
            {
                val -= coins[i];
                numCoins++;
                break;
            }
        }
    }
    //print coins
    printf("%i\n", numCoins);
}