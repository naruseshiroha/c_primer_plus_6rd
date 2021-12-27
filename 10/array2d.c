
#include <stdio.h>

#define ROWS 3
#define COLS 4

void sum_rows(int (*pt)[COLS], int rows);
void sum_cols(int[][COLS], int);
int sum2d(int pt[][COLS], int rows);

int main(void)
{
    int junk[ROWS][COLS] = {{2, 4, 6, 8}, {3, 5, 7, 9}, {12, 10, 8, 6}};

    sum_rows(junk, ROWS);
    printf("---------------------------------------------\n");
    sum_cols(junk, ROWS);
    printf("---------------------------------------------\n");
    sum2d(junk, ROWS);
    return 0;
}

void sum_rows(int (*pt)[COLS], int rows)
{
    for (int r = 0; r < rows; r++)
    {
        int total = 0;
        for (int c = 0; c < COLS; c++)
        {
            // printf("pt[%d][%d] = %d, *(*(pr + %d) + %d) = %d\n", r, c, pt[r][c], r, c, *(*(pt + r) + c));
            total += *(*(pt + r) + c); // pt[r][c]
        }
        printf("row %d: sum = %d\n", r + 1, total);
    }
}

void sum_cols(int pt[][COLS], int rows)
{
    for (int c = 0; c < COLS; c++)
    {
        int total = 0;
        for (int r = 0; r < rows; r++)
        {
            // printf("pt[%d][%d] = %d, *(*(pr + %d) + %d) = %d\n", r, c, pt[r][c], r, c, *(*(pt + r) + c));
            total += *(*(pt + r) + c); // pt[r][c]
        }
        printf("col %d: sum = %d\n", c + 1, total);
    }
}
int sum2d(int pt[][COLS], int rows)
{
    int total = 0;
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            // printf("pt[%d][%d] = %d, *(*(pr + %d) + %d) = %d\n", r, c, pt[r][c], r, c, *(*(pt + r) + c));
            total += *(*(pt + r) + c);
        }
    }

    printf("Sum of all elements = %d\n", total);
}