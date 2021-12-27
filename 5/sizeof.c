// 使用 sizeof 运算符
#include <stdio.h>

int main(void)
{
    int n = 0;
    size_t intsize;
    intsize = sizeof(int);

    // if not support %zd, use %u or %lu replace it
    printf("n = %d, n has %zd bytes: all ints \
have %zd bytes.\n",
           n, sizeof n, intsize);

    return 0;
}