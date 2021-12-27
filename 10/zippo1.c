
#include <stdio.h>

int main(void)
{
    int zippo[4][2] = {
        {2, 4},
        {6, 8},
        {1, 3},
        {5, 7}};

    printf("zippo = %p, zippo + 1 = %p\n\
zippo[0] = %p, zippo[0] + 1 = %p\n\
*zippo = %p, *zippo + 1 = %p\n\
zippo[0][0] = %d\n\n",
           zippo, zippo + 1, zippo[0], zippo[0] + 1, *zippo, *zippo + 1, zippo[0][0]);

    // 2 2 3 3
    printf("*zippo[0] = %d\n\
**zippo = %d\n\
zippo[2][1] = %d\n\
*(*(zippo+2)+1) = %d\n",
           *zippo[0], **zippo, zippo[2][1], *(*(zippo + 2) + 1));

    return 0;
}