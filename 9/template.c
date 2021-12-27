#include <stdio.h>

void alter(int *, int *);
long max(long, long, long);

int main(void)
{
    int x, y;
    x = y = 10;
    printf("%d %d\n", x, y);
    alter(&x, &y);
    printf("%d %d\n", x, y);

    printf("%ld", max(11L, 21L, 2L));
    return 0;
}

void alter(int *x, int *y)
{
    *x += *y;
    *y = *x - 2 * *y;
}

long max(long a, long b, long c)
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}