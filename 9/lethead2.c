#include <stdio.h>
#include <string.h>

#define NAME "Gawr Gura"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void)
{
    int spaces;

    show_n_char('*', WIDTH);
    putchar('\n');
    show_n_char(SPACE, 16);
    printf("%s\n", NAME);

    spaces = (WIDTH - strlen(ADDRESS)) / 2;
    show_n_char(SPACE, spaces);
    printf("%s\n", ADDRESS);
    
    show_n_char(SPACE, (WIDTH - strlen(PLACE)) /2);
    printf("%s\n", PLACE);
    show_n_char("*", WD)


    return 0;
}

void show_n_char(char ch, int num)
{
}