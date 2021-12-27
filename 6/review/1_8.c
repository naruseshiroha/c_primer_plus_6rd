#include <stdio.h>

int main(void)
{
    char ch;

    // Go west, young man !
    scanf("%c", &ch);

    // while (ch != 'g')
    // {
    //     printf("%c", ch);
    //     scanf("%c", &ch);
    // }
    // Go west, youn

    // while (ch != 'g')
    // {
    //     printf("%c", ++ch);
    //     scanf("%c", &ch);
    // }
    // Hp!xftu-!zpvo

    // do
    // {
    //     scanf("%c", &ch);
    //     printf("%c", ch);
    // } while (ch != 'g');
    // Go west, young

    for (ch = '$'; ch != 'g'; scanf("%c", &ch))
        printf("%c", ch);
    // $o west, youn

    return 0;
}