#include <stdio.h>

int main(void)
{
    char ch;
    int cur = 0;

    // getchar() 会读取 enter -> '\0'
    while ((ch = getchar()) != '#')
    {
        printf("%c -> %d, ", ch, ch);
        cur++;
        if (!(cur % 8))
            printf("\n");
    }
    return 0;
}