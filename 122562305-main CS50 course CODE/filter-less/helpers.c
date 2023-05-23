#include "helpers.h"
#include <math.h>

#define red_col 0
#define green_col 1
#define blue_col 2

int getblur(int a, int b, int height, int width, RGBTRIPLE image[height][width], int color_position);

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            float red = image[i][j].rgbtRed;
            float green = image[i][j].rgbtGreen;
            float blue = image[i][j].rgbtBlue;

            int average = round((red + green + blue) / 3.0);

            image[i][j].rgbtBlue = average;
            image[i][j].rgbtGreen = average;
            image[i][j].rgbtRed = average;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int sepiaRed = round(0.393 * image[i][j].rgbtRed + 0.769 * image[i][j].rgbtGreen + 0.189 * image[i][j].rgbtBlue);
            int sepiaGreen = round(0.349 * image[i][j].rgbtRed + 0.686 * image[i][j].rgbtGreen + 0.168 * image[i][j].rgbtBlue);
            int sepiaBlue = round(0.272 * image[i][j].rgbtRed + 0.534 * image[i][j].rgbtGreen + 0.131 * image[i][j].rgbtBlue);

            if(sepiaRed > 255)
            {
                sepiaRed = 255;
            }

            if(sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }

            if(sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }

            image[i][j].rgbtBlue = sepiaBlue;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtRed = sepiaRed;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            RGBTRIPLE tmp = image[i][j];
            image[i][j] = image[i][width - (j + 1)];
            image[i][width - (j + 1)] = tmp;
        }
    }
    return;
}

// Blur image

int getblur(int a, int b, int height, int width, RGBTRIPLE image[height][width], int color_position)
{
    float count = 0;
    int sum = 0;
    for(int i = a - 1; i <= (a + 1); i++)
    {
        for(int j = b - 1; j <= (b + 1); j++)
        {
            if(i < 0 || i >= height || j < 0 || j >= width)
            {
                continue;
            }
            if(color_position == red_col)
            {
                sum = sum + image[i][j].rgbtRed;
            }
            else if(color_position == green_col)
            {
                sum = sum + image[i][j].rgbtGreen;
            }
            else
            {
                sum = sum + image[i][j].rgbtBlue;
            }
            count++;
        }
    }
    return round(sum / count);
}

//CALL F
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE copy[height][width];

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }

    for(int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbtRed = getblur(i, j, height, width, copy, red_col);
            image[i][j].rgbtGreen = getblur(i, j, height, width, copy, green_col);
            image[i][j].rgbtBlue = getblur(i, j, height, width, copy, blue_col);
        }
    }
    return;
}
