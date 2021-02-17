#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    long input = 0;
    int len = 0;
    int first = 0;
    int second = 0;

    //get input from user
    do
    {
        input = get_long("Credit: ");
        len = (int)floor(log10(labs(input))) + 1;

        first = input / pow(10, len - 1); //pick the first number of input
        second = input / pow(10, len - 2); //pick first and second numbers of input
    }
    while (input == 0);


    //make the Luhn’s Algorithm
    int sum = 0; //first sum
    int otherSum = 0; //second sum
    int allSum = 0; //total sum
    for (int i = len; i > 0; i--)
    {
        long num = (long)(input / pow(10, len - i)) % (long)10;

        if ((i % 2 != 0 && len % 2 == 0) || (len % 2 != 0 && i % 2 == 0))
        {
            //if num * 2 have 2 digits
            if (num > 4)
            {
                int numx2 = num * 2;
                sum += numx2 % 10 + ((numx2 / 10) % 10);
            }
            else
            {
                sum += num * 2;
            }
        }
        else
        {
            otherSum += num;
        }

        //total sum = first sum + second sum
        allSum = otherSum + sum;
    }

    //check the type and if is valid
    if (allSum % 10 == 0)
    {
        //condition of cards
        if ((second == 34 || second == 37) && len == 15) //American Express
        {
            printf("AMEX\n");
        }
        else if ((second == 51 || second == 52 || second == 53 || second == 54 || second == 55) && len == 16) //MasterCard
        {
            printf("MASTERCARD\n");
        }
        else if ((len == 13 || len == 16) && first == 4) //Visa
        {
            printf("VISA\n");
        }
        else //Invalid
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}