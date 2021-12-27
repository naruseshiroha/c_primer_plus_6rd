#include <stdio.h>

#define JH '.'
#define GTH '!'

int main(void)
{
    char ch;
    int count = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == JH)
            count++, printf("!");
        else if (ch == GTH)
            count++, printf("!!");
        else
            printf("%c", ch);
    }
    printf("\nDone\n");

    printf("Count:%d\n", count);

    return 0;
}