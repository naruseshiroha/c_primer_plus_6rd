// 指针和字符串
#include <stdio.h>

int main(void)
{
    const char *msg = "Don't be a fool!";
    const char *copy;

    copy = msg;

    printf("%s\n", copy);
    printf("msg = %s; &msg = %p; value = %p\n", msg, &msg, msg);
    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);

    return 0;
}