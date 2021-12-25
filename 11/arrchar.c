// 指针数组，字符串数组
#include <stdio.h>

#define SLEN 40
#define LIM 5

int main(void)
{
    const char *my_talents[LIM] = {
        "Adding numbers swiftly",
        "Multiplying accurately",
        "Stashing data",
        "Following instructions to the letter",
        "Understanding the C language"};
    char your_talents[LIM][SLEN] = {
        "Walking in a straight line",
        "Sleeping",
        "Watching television",
        "Mailing letters",
        "Reading email"};

    puts("Let's comoare talents.");
    printf("%-36s   %-25s\n", "My Talents", "Your Talents");
    for (int i = 0; i < LIM; i++)
    {
        printf("%-36s   %-25s\n", my_talents[i], your_talents[i]);
    }
    printf("\nsizeof my_talents: %zd sizeof your_talents: %zd\n", sizeof(my_talents), sizeof(your_talents));

    return 0;
}