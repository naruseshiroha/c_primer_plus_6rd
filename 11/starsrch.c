// 使用 strncmp()
#include <stdio.h>
#include <string.h>
#define SIZE 6
int main(void)
{
    const char *list[SIZE] = {
        "astronomy",
        "astounding",
        "astrophysics",
        "ostracize",
        "asterism",
        "astrophobia"};
    int count = 0;
    int i;
    for (i = 0; i < SIZE; i++)
        if (!strncmp(list[i], "astro", 5))
        {
            printf("Found: %s\n", list[i]);
            count++;
        }
    printf("The list contained %d words beginning with astro.\n", count);

    return 0;
}