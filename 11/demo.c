
#include <stdio.h>

int main(void)
{
    // "\"Hello, and how are you today!"
    // char greeting[50] = "\"Hello, and"
    //                     " how are "
    //                     "you"
    //                     " today!";

    // char heart[] = "i love Tille";
    // const char *head = "i love Millie";

    // head = heart;

    char *p1 = "Klingon";
    p1[0] = 'F';
    printf("Klingon");
    printf(":Beware the %ss!\n", "Klingon");

    return 0;
}