#include <stdio.h>

#define MIN 0.0f
#define MAX 100.0f

int main(void)
{
    float score;
    float min = MIN, max = MAX, total = 0.0f;
    int n = 0;

    printf("Enter the first score(q to quit):");

    while (scanf("%f", &score) == 1)
    {
        if (score < MIN || score > MAX)
        {
            printf("%0.1f is an invalid value. Try again: ", score);
            continue;
        }

        printf("Accepting %0.1f:\n", score);

        min = (score < min) ? score : min;
        max = (score > max) ? score : max;
        total += score;
        n++;

        printf("Enter next score(q to quit):");
    }

    if (n)
        printf("Average of %d scores is %0.1f.\n\
Low = %0.1f, high = %0.1f\n",
               n, total / n, min, max);
    else
        printf("No valid scores were entered.\n");

    return 0;
}