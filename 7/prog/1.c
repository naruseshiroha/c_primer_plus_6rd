#include <stdio.h>

int main(void)
{
    char ch;
    int space_count, enter_count, other_count;
    space_count = enter_count = other_count = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            space_count++;
        else if (ch == '\n')
            enter_count++;
        else
            other_count++;
    }

    printf("space_count:%d, enter_count:%d, other_count:%d\n",
           space_count, enter_count, other_count);

    return 0;
}