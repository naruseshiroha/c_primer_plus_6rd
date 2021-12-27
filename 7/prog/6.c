#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char ch, cur, pre;
    cur = pre = ' ';
    bool flag = false;
    int count = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch != 'e')
        {
            pre = cur, cur = ch;
            if (cur == 'i' && pre == 'e')
                pre = cur = ' ', flag = true;
        }
        else
            pre = cur, cur = ch;

        if (flag)
            count++, flag = false;
    }

    printf("ei count is %d.\n", count);

    return 0;
}