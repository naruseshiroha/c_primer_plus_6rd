
#include <stdio.h>

void interchange(int x, int y);

int main(void)
{
    int x = 5, y = 10;

    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(x, y);
    printf("Now x = %d and y = %d.\n", x, y);

    return 0;
}

void interchange(int x, int y)
{
    printf("Originally x = %d and y = %d.\n", x, y);
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Now x = %d and y = %d.\n", x, y);
}