// 使用 puts()
#include <stdio.h>
#define DEF "I an a #defined string."
int main(void)
{
    char str1[80] = "An array was initialized to me.";
    const char *str2 = "A pointer was iitialized to me.";

    puts("i'm an argument to puts().");
    puts(DEF);
    puts(str1);
    puts(str2);
    puts(&str1[5]); // r
    puts(str2 + 4); // i
    return 0;
}