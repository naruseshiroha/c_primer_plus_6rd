#include <stdio.h>

int main(void)
{
    int i = 0;

    while (++i < 4)
    {
        printf("Hi! ");
    }

    do
    {
        printf("Bye! ");
    } while (i++ < 8);

    int j;
    char ch;

    for (j = 0, ch = 'A'; j < 4; j++, ch += 2 * j)
    {
        printf("%c ", ch);
    }

    // A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
    // A C G M

    return 0;
}