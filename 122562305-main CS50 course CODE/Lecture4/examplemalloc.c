#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int x = get_int();
    float stack_array[x];
    float *heap_arrey = malloc(x * sizeof(float));


    int m;
    int *a;
    int *b = malloc(sizeof(int));
    a = &m;
    a = b;
    m = 10;
    *b = m + 2;
    free(b);
}