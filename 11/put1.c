// 打印字符串，不添加\n
#include <stdio.h>

void put1(const char *string)
{
    // while (*string != '\0')
    // string 指向 空字符时，*string 0
    while (*string)
        putchar(*string++);
}

int main()
{
    put1("pizza");
}