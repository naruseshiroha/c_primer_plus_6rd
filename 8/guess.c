#include <stdio.h>

int main(void)
{
    int guess = 1;

    printf("Pick an integer from 1 to 100. I will try to guess it.\n\
Respond with a y if my guess is right and with\n\
an n if it is wrong.\n\
Uh... us your number %d?\n",
           guess);

    // v1
    // while (getchar() != 'y')
    //     printf("Well, then, is it %d?\n", ++guess);

    // v2
    // while (getchar() != 'y')
    // {
    //     printf("Well, then, is it %d?\n", ++guess);
    //     while (getchar() != '\n')
    //         continue;
    // }

    // v3
    char response;
    while ((response = getchar()) != 'y')
    {
        if (response == 'n')
            printf("Well, then, is it %d?\n", ++guess);
        else
            printf("Sorry, I understand only y or n.\n");

        while (getchar() != '\n')
            continue;
    }

    printf("I knew i could do it!\n");

    return 0;
}