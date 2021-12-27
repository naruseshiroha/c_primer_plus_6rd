#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int lc, uc, oc;
    lc = uc = oc = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch >= 'a' && ch <= 'z')
            // if (islower(ch))
            lc++;
        // ???
        else if (!(ch < 'A') && !(ch > 'Z'))
            // else if (isupper(ch))
            uc++;
        else
            oc++;
    }

    printf("%d lower case, %d upper case, %d other\n", lc, uc, oc);

    return 0;
}