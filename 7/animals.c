#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Give me a letter of alphabet, and i will give an animal name\n\
beginning with that letter.\n\
Please type in a letter; type # to end my act.\n");

    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
            continue;
        if (islower(ch))
            switch (ch)
            {
            case 'a':
                printf("argail, a wild sheep of Asia.\n");
                break;
            case 'b':
                printf("babirusa, a wild pig of Malay.\n");
                break;
            case 'c':
                printf("coati, racoonlike mammal.\n");
                break;
            case 'd':
                printf("desman, aquatic, molelike critter.\n");
                break;
            case 'e':
                printf("echihdna, the spiny anteater.\n");
                break;
            case 'f':
                printf("fisher, brownish marten.\n");
                break;
            default:
                printf("That's a stumoer!\n");
            }
        else
            printf("I recognize only lowercase letters.\n");

        // 跳过其余行的输入
        while (getchar() != '\n')
            continue;

        printf("Please type another letter or a #.\n");
    }

    printf("Bye!\n");

    return 0;
}