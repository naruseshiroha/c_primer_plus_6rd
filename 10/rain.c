
#include <stdio.h>

#define YEARS 5
#define MONTHS 12

int main(void)
{
    const float rain[YEARS][MONTHS] = {
        {1.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {4.3, 4.3, 2.3, 3.0, 2.0, 1.2, 1.2, 0.2, 2.4, 2.2, 3.5, 6.6},
        {4.3, 2.3, 4.3, 1.0, 2.0, 1.2, 2.2, 0.2, 3.4, 2.4, 3.5, 6.6},
        {2.3, 3.3, 4.3, 2.0, 2.0, 1.2, 3.2, 0.2, 1.4, 2.4, 3.5, 6.6},
        {4.3, 4.3, 1.3, 3.0, 2.0, 1.2, 4.2, 0.2, 3.4, 2.4, 3.5, 6.6}};
    int year, month;
    float subtot, total;

    printf("  YEAR      RAINFALL  (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++)
    {
        for (month = 0, subtot = 0; month < MONTHS; month++)
            subtot += rain[year][month];

        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot;
    }

    printf("\nThe yearly average si %.1f inches.\n\n", total / YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, subtot = 0; year < YEARS; year++)
            subtot += rain[year][month];

        printf("%4.1f ", subtot / YEARS);
    }
    printf("\n");

    return 0;
}