#include <stdio.h>

int main(void)
{
    int ch;

    // #define EOF (-1)
    while ((ch = getchar()) != EOF)
        putchar(ch);

    return 0;
}