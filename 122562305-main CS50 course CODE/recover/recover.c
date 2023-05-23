#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open the file\n");
        return 2;
    }
    
    unsigned char buffer[512];
    int count_image = 0;
    FILE *output = NULL;
    char *cop = malloc(8 * sizeof(char));


    while (fread(buffer, sizeof(char), 512, input))
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            sprintf(cop, "%03i.jpg", count_image);
            output = fopen(cop, "w");
            count_image++;
        }

        if (output != NULL)
        {
            fwrite(buffer, sizeof(char), 512, output);
        }
    }
    free(cop);
    fclose(input);
    fclose(output);
}