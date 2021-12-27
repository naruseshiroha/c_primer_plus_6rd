
#include <stdio.h>

int main(void)
{
    const int days[] = {31L, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // sizeof days -> 48 (12 * 4)
    for (int index = 0; index < sizeof days / sizeof days[0]; index++)
        printf("sizeof(days) %d, sizeof(days[index]) %d\n\
Month %02d has %2d days.\n",
               sizeof(days), sizeof(days[index]), index + 1, days[index]);

    return 0;
}