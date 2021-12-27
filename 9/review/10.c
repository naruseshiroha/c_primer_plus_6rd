#include <stdio.h>

void show_menu(void);
int get_choice(int low, int high);

int main(void)
{
    int res;

    show_menu();
    while ((res = get_choice(1, 4)) != 4)
        printf("i like choice %d.\n", res), show_menu();
    printf("Bye.\n");

    return 0;
}

void show_menu(void)
{
    printf("Please choose one of the following:\n\
1) copy files           2) move files\n\
3) remove files         4) quit\n");
    printf("Enter the number of your choice:");
}

int get_choice(int low, int high)
{
    int ans, good;
    good = scanf("%d", &ans);

    while (good == 1 && (ans < low || ans > high))
    {
        printf("%d is not a valid choice; try again:", ans);
        good = scanf("%d", &ans);
    }

    if (good != 1)
        printf("Non-numeric input.\n"), ans = 4;

    return ans;
}