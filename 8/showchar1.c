#include <stdio.h>

void display(char ch, int lines, int width);

int main(void)
{
    int ch, rows, cols; // 字符 行 列

    printf("Enter a character and two integers:\n");

    while ((ch = getchar()) != '\n')
    {
        scanf("%d %d", &rows, &cols);
        // char 比 int 小，
        display((char)ch, rows, cols);
        printf("Enter another character and two integers;\n\
Enter a new line to quit.");
    }

    printf("Bye.\n");

    return 0;
}

void display(char ch, int lines, int width)
{
    int row, col;

    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
            putchar(ch);
        putchar('\n');
    }
}