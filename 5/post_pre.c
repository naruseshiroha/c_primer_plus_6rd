// 前缀和后缀
#include <stdio.h>

int main(void)
{
    int a = 1, b = 1;
    int aplus, bplus;

    aplus = a++;
    bplus = ++b;

    printf("a:%d, b:%d, aplus:%d, bplus:%d\n", a, b, aplus, bplus);

    return 0;
}
