#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2 || atoi(argv[1]) == 0)
    {
        //argument error
        printf("Usage: ./caesar key\n");
        return 1;
    }

    //set key value (atoi() convert string or char to int)
    int key = atoi(argv[1]) % 26;
    //get plaitext from the user
    string p = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        int c = 0;
        if (p[i] >= 'a' && p[i] <= 'z')
        {
            //determines c (if c is plus key is greather then 122(z on ascii) c is equal to the rest)
            c = p[i] + key > 122 ? (p[i] + key - 122) + 96 : p[i] + key;
            printf("%c", c);
        }
        else if (p[i] >= 'A' && p[i] <= 'Z')
        {
            //same thing with this but on the capital letters
            c = p[i] + key > 90 ? (p[i] + key - 90) + 65 : p[i] + key;
            printf("%c", c);
        }
        else
        {
            //if isnt a letter print same thing
            printf("%c", p[i]);
        }
    }
    printf("\n");
    return 0;
}