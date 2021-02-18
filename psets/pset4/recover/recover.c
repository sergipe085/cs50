#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <stdint.h>

//create a type BYTE
typedef uint8_t BYTE;

//define some values
#define BLOCK_SIZE 512
#define FILE_NAME_SIZE 8

int main(int argc, char *argv[])
{
    //if arguments are different of 2 return 1
    if (argc != 2)
    {
        printf("Use ./recover image.pn\n");
        return 1;
    }

    FILE *memoryCard = fopen(argv[1], "r");
    //if failed not openned return 1
    if (memoryCard == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    BYTE buffer[BLOCK_SIZE];
    int count = 0;
    bool jpgFounded = false;
    FILE *outfile;

    //while im reading the memorycard
    while (fread(buffer, BLOCK_SIZE, 1, memoryCard) != 0)
    {
        //verify if the buffer starts with jpg
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            //verify if the jpg is already founded
            if (!jpgFounded)
            {
                jpgFounded = true;
            }
            else
            {
                fclose(outfile);
            }

            //declare the filename var
            char filename[FILE_NAME_SIZE];
            //print name of the file to filename var
            sprintf(filename, "%03i.jpg", count++);
            // open or create (if not exist) a file with name "filename"
            outfile = fopen(filename, "w");
            if (outfile == NULL)
            {
                return 1;
            }
            //write buffer to outfile (new file created)
            fwrite(buffer, BLOCK_SIZE, 1, outfile);
        }
        else if (jpgFounded)
        {
            fwrite(buffer, BLOCK_SIZE, 1, outfile);
        }
    }
    fclose(outfile);
    fclose(memoryCard);
}