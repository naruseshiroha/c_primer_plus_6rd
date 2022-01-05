// 修改字符串
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define LIMIT 81

void toUpper(char *st);
int punctCount(const char *st);

int main(void)
{
    char line[LIMIT];
    char *find;

    puts("Please enter a line:");
    fgets(line, LIMIT, stdin);
    // 查找换行符
    find = strchr(line, '\n');
    if (find)
        *find = '\0';
    toUpper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n", punctCount(line));

    return 0;
}

void toUpper(char *str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

int punctCount(const char *str)
{
    int ct = 0;
    while (*str)
    {
        if (ispunct(*str))
            ct++;
        str++;
    }
    return ct;
}