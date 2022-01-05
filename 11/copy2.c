// 使用 strcpy()
#include <stdio.h>
#include <string.h>
#define WORDS "beast"
#define SIZE 40
int main(void)
{
    const char *oring = WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char *ps;

    puts(oring); // beast
    puts(copy); // Be the best that you can be.

    ps = strcpy(copy + 7, oring); //  beast
    puts(copy);// Be the beast
    puts(ps);

    return 0;
}
