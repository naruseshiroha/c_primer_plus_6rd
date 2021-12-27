#include <stdio.h>

#define rows 4
#define cols 8

int main(void)
{
    int r,c;

    for (r = 1; r <= rows; r++)
    {
        for (c = 1; c <= cols; c++)
            printf("＄");
        printf("\n");
    }
    return 0;
}