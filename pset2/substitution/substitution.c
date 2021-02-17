#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //check if have key
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    //check if key have 26 characters
    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        //check if have any non letters
        if (!(argv[1][i] >= 'a' && argv[1][i] <= 'z') && !(argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
        {
            printf("Error: key must contain only letters!\n");
            return 1;
        }
        //check if have any same letter
        for (int j = 0; j < n; j++)
        {
            if (i != j && argv[1][i] == argv[1][j])
            {
                printf("Error: key must contain only unique characters!\n");
                return 1;
            }
        }
    }

    //get p from user
    string p = get_string("plaintext: ");

    printf("ciphertext: ");
    //make the substitution
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        char l = (argv[1][p[i] - 'a']);
        char u = (argv[1][p[i] - 'A']);
        char c = (p[i] >= 'a' && p[i] <= 'z') || (p[i] >= 'A' && p[i] <= 'Z') ? islower(p[i]) ? tolower(l) : toupper(u) : p[i];
        printf("%c", c);
    }
    printf("\n");
    return 0;
}