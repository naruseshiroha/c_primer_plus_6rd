#include <stdio.h>

#define JH '.'
#define GTH '!'

int main(void)
{
    char ch;
    int count = 0;

    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case JH:
            count++, printf("!");
            break;
        case GTH:
            count++, printf("!!");
            break;
        default:
            printf("%c", ch);
            break;
        }
    }
    printf("\nDone\n");

    printf("Count:%d\n", count);

    return 0;
}