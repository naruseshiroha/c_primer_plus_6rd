#include <stdio.h>

#define SPACE ' '

int main(void)
{
    char ch;
    // ch = getchar(); // 读取一个字符

    // while (ch != '\n') // 当一行未结束时
    // {
    //     if (ch == SPACE)
    //         putchar(ch);
    //     else
    //         putchar(++ch);
    //     ch = getchar(); // 获取下一个字符
    // }
    // putchar(ch); // 换行

    while ((ch = getchar()) != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(++ch);
    }
    putchar(ch); // 换行

    return 0;
}