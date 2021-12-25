
#include <stdio.h>

#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81

int main(void)
{
    char words[MAXLENGTH] = "I am a string in an array.";
    const char *pt = "Something is pointing at me.";

    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(pt);

    words[8] = 'p';
    puts(words);

    return 0;
}