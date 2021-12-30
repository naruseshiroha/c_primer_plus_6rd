// 一些不匹配的整形转换
#include <stdio.h>

#define PAGES 336
#define WORDS 65618

int main(void)
{
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short: %hd %hu\n\
-num as short and unsigned short: %hd %hu\n\
num as int and char: %d %c\n\
WORDS as int, short, and char: %d %hd %c\n",
           num, num, mnum, mnum, num, num, WORDS, WORDS, WORDS);

    return 0;
}