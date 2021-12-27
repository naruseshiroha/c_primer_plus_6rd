
#include <stdio.h>
#include "hotel.h"

int menu(void)
{
    int code, status;

    printf("\n%s%s\n", STARS, STARS);
    printf("Enter the number of the desired hotel:\n\
1) Fairfield Arms           2) Hotel Olympic\n\
3) Chertworthy Plaza        4) The Stockton\n\
5) quit\n");
    printf("\n%s%s\n", STARS, STARS);

    while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5))
    {
        if (status != 1)
        {
            // 处理非整数输入
            scanf("%*s");
            printf("Enter an integer from 1 to 5, please.\n");
        }
    }
    return code;
}

int get_nights(void)
{
    int nights;

    printf("How many nights are needed?");

    while (scanf("%d", &nights) != 1)
    {
        scanf("%*s");
        printf("Enter an integer, such as 2.\n");
    }

    return nights;
}

void show_price(double rate, int nights)
{
    int n;
    double total, factor;
    total = 0.0, factor = 1.0;

    for (n = 1; n <= nights; n++, factor *= DISCOUNT)
        total += rate * factor;
    printf("The total cost will be %0.2f.\n", total);
}