#include <stdio.h>

int main(void)
{
    int input;
    int odd_count, even_count;
    float odd_avg, even_avg;
    odd_count = even_count = 0;
    odd_avg = even_avg = 0.0f;

    while (scanf("%d", &input) == 1)
    {
        if (input == 0)
            break;
        if (!(input % 2))
            even_count++, even_avg += input;
        else
            odd_count++, odd_avg += input;
    }

    printf("odd_count:%d, odd_avg:%.2f\n", odd_count, (odd_avg / (float)odd_count));
    printf("even_count:%d, even_avg:%.2f\n", even_count, (even_avg / (float)even_count));

    return 0;
}