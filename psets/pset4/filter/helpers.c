#include "helpers.h"
#include "stdio.h"
#include "math.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            //make the avarage beetwen red green and blue of the pixel
            int avarage = round((image[h][w].rgbtRed + image[h][w].rgbtGreen + image[h][w].rgbtBlue) / 3.0);
            image[h][w].rgbtRed = image[h][w].rgbtGreen = image[h][w].rgbtBlue = avarage;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            //make the sepia algorithm
            int sepiaRed = round(.393 * image[h][w].rgbtRed + .769 * image[h][w].rgbtGreen + .189 * image[h][w].rgbtBlue);
            int sepiaGreen = round(.349 * image[h][w].rgbtRed + .686 * image[h][w].rgbtGreen + .168 * image[h][w].rgbtBlue);
            int sepiaBlue = round(.272 * image[h][w].rgbtRed + .534 * image[h][w].rgbtGreen + .131 * image[h][w].rgbtBlue);
            // if the result of sopie algorithm is more than 255 return 255 if not return sopie result
            sepiaRed = sepiaRed > 255 ? 255 : sepiaRed;
            sepiaGreen = sepiaGreen > 255 ? 255 : sepiaGreen;
            sepiaBlue = sepiaBlue > 255 ? 255 : sepiaBlue;
            //change image pixels for sopie algorithm results
            image[h][w].rgbtRed = sepiaRed;
            image[h][w].rgbtGreen = sepiaGreen;
            image[h][w].rgbtBlue = sepiaBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int h = 0; h < height; h++)
    {
        //go to the middle of screen because on the half the imges will be inverted
        for (int w = 0; w < width / 2; w++)
        {
            //temp variable
            int reflectRed = image[h][width - w - 1].rgbtRed;
            image[h][width - w - 1].rgbtRed = image[h][w].rgbtRed;
            image[h][w].rgbtRed = reflectRed;

            int reflectGreen = image[h][width - w - 1].rgbtGreen;
            image[h][width - w - 1].rgbtGreen = image[h][w].rgbtGreen;
            image[h][w].rgbtGreen = reflectGreen;

            int reflectBlue = image[h][width - w - 1].rgbtBlue;
            image[h][width - w - 1].rgbtBlue = image[h][w].rgbtBlue;
            image[h][w].rgbtBlue = reflectBlue;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // copy images array to a new array
    RGBTRIPLE originalImages[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            originalImages[i][j] = image[i][j];
        }
    }

    //loop for the height and width
    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            int validNum = 0;

            int redAvg = 0;
            int greenAvg = 0;
            int blueAvg = 0;

            // loops do -1 to 1 in y and -1 to 1 in x
            for (int y = -1; y <= 1; y++)
            {
                for (int x = -1; x <= 1; x++)
                {
                    // only true if the value isnt out of image array (height and width)
                    if ((w + x >= 0 && w + x < width) && (h + y >= 0 && h + y < height))
                    {
                        redAvg += originalImages[h + y][w + x].rgbtRed;
                        greenAvg += originalImages[h + y][w + x].rgbtGreen;
                        blueAvg += originalImages[h + y][w + x].rgbtBlue;

                        validNum++;
                    }
                }
            }
            //make the avarage and pass the value tu image pixel
            image[h][w].rgbtRed = round(redAvg / (float)validNum);
            image[h][w].rgbtGreen = round(greenAvg / (float)validNum);
            image[h][w].rgbtBlue = round(blueAvg / (float)validNum);
        }
    }
    return;
}
