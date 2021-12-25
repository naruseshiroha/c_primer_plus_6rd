// 使用 gets() puts()
#include <stdio.h>

#define STLEN 3

int main(void)
{
    char words[STLEN];
    puts("Enter a string, please.");
    // gets is deprecated, is dangerous and should not be used
    gets(words);
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done.");
    return 0;
}