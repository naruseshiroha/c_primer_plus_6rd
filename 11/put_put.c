// 用户自定义输出函数
#include <stdio.h>

void put1(const char *);
int put2(const char *);

int main(void)
{
    put1("If i'd as much money");
    put1(" as i could spend,\n");
    printf("I count %d characters.\n",
           put2("I never would cry old chairs to mend."));

    return 0;
}

void put1(const char *string)
{
    while (*string)
        putchar(*string++);
}

int put2(const char *string)
{
    int count = 0;
    while (*string)
    {
        putchar(*string++);
        count++;
    }

    return count;
}