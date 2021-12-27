#include <stdio.h>

#define COLS 4

int sum2d(const int (*ar)[COLS], int rows);
int sum(const int *ar, int n);

int main(void)
{
    int total1, total2, total3;

    int *pt1;
    int(*pt2)[COLS];

    pt1 = (int[2]){10, 20};
    pt2 = (int[2][COLS]){{1, 2, 3, -9}, {4, 5, 6, -8}};

    total1 = sum(pt1, 2);
    total2 = sum2d(pt2, 2);
    total3 = sum((int[6]){4, 4, 5, 5, 5, 4}, 6);

    printf(" total1 = %d\n total2 = %d\n total3 = %d\n", total1, total2, total3);

    return 0;
}

int sum2d(const int (*ar)[COLS], int n)
{
    int total = 0;
    for (int r = 0; r < n; r++)
        for (int c = 0; c < COLS; c++)
            // printf("%d\n", *(*(ar + r) + c));
            total += (*(*(ar + r) + c));

    return total;
}

int sum(const int *ar, int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += *(ar + i);
    }

    return total;
    // printf("Total is %d.\n", total);
}