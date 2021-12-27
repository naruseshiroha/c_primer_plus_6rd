// 使用转换说明
#include <stdio.h>

#define PI 3.141593

int main(void)
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %f berry pies.\n\
The value of pi is %f.\n\
Farewell! thou art too dear for my possessing,\n\
%c%d\n",
           number, pies, PI, '$', 2 * cost);

    return 0;
}