#include <stdio.h>

int main(void)
{
    int ans = 2, n;

    for (n = 3; ans < 25;)
    {
        ans *= n;
    }

    printf("n = %d; ans = %d.\n", n, ans);

    return 0;
}