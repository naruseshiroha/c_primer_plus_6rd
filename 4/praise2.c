
#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extra ordinary being."

int main(void)
{
    char name[40];

    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    // %u %lu %llu replace %zd
    printf("Your name of %llu letters occupies %llu memory cells.\n", strlen(name), sizeof name);
    printf("The phrase of praise has %llu letters and occupies %llu memory cells.\n", strlen(PRAISE), sizeof PRAISE);

    return 0;
}