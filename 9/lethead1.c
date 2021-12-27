#include <stdio.h>

#define NAME "Gawr Gura"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void); /*函数原型*/

int main(void)
{
    starbar();
    printf("%s\n%s\n%s\n", NAME, ADDRESS, PLACE);
    starbar();

    return 0;
}

void starbar(void) /*d定义函数*/
{
    int count;
    for (count = 0; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');
}