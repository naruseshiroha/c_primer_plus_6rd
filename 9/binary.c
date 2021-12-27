
#include <stdio.h>

void to_binary(unsigned long n);

int main(void)
{
    unsigned long number;

    printf("Enter an integer (q to quit):\n");

    while (scanf("%lu", &number) == 1)
    {
        printf("Binary quivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }

    printf("Done.\n");

    return 0;
}

void to_binary(unsigned long n)
{
    // if (n < 2)
    //     printf("%d", n);
    // else
    // {
    //     to_binary(n / 2);
    //     printf("%d", n % 2);
    // }

    if (n >= 2)
        to_binary(n / 2);
    // printf("%d", n % 2);
    putchar(n % 2 == 0 ? '0' : '1');

    // int r = n % 2;

    // if (n >= 2)
    //     to_binary(n / 2);
    // putchar(r == 0 ? '0' : '1');

    // return;
}
