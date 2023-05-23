#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    char *s = "HI!";

    printf("%p\n", p);
    printf("%i\n", *p);
    printf("%s\n", s);
    printf("%p\n", s);
    printf("%p\n", &s[1]);
    printf("%s\n", s+1);
    printf("%s\n", s+2);

}
