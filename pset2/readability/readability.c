#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    //Get input from user
    string text = get_string("Text: ");
    bool space = true;

    int words = 1;
    int letters = 0;
    int setences = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        //Ignore all te spaces before the first leter and the double(tripe....) spaces
        if (tolower(text[i]) >= 'a' && tolower(text[i]) <= 'z')
        {
            space = false;
            letters++;
        }
        //if have any final sentence expression
        if (text[i] == '!' || text[i] == '.' || text[i] == '?')
        {
            setences++;
        }

        //indentify words
        if (text[i] == ' ' && !space)
        {
            //add words
            words++;
            space = true;
        }
    }

    //calculate avarage beetween number of letters and 100 words
    float L = ((float)letters / words) * 100.0;
    //calculate avarage beetween number of setences and 100 words
    float S = ((float)setences / words) * 100.0;
    //calculate grade
    int index = round((0.0588 * L - 0.296 * S - 15.8));
    if (index < 16 && index >= 1)
    {
        printf("Grade %i\n", index);
    }
    else
    {
        printf(index < 1 ? "Before Grade 1\n" : "Grade 16+\n");
    }
}