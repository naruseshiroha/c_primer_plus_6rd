
#include <stdio.h>

#define SIZE 4

int main(void)
{
    const int no_data[SIZE];

    printf("%2s%14s\n", "i", "no_data[i]");
    for (int i = 0; i < SIZE; i++)
        printf("%2d%14d\n", i, no_data[i]);

    return 0;
}