#include <stdio.h>

void chline(char c, int i, int j);

int main(void)
{
    char c;
    int rows, cols;

    printf("please enter a charater and two integer of rows, cols.\n");
    scanf("%c %d %d", &c, &rows, &cols);

    chline(c, rows, cols);

    return 0;
}

void chline(char c, int rows, int cols)
{
    int row, col;
    row = col = 0;
    for (row = 0; row < rows; row++)
    {
        for (col = 0; col < cols; col++)
            printf("%c", c);
        printf("\n");
    }
}