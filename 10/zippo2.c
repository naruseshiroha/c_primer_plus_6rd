
#include <stdio.h>

int main(void)
{
    int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
    int(*pz)[2];

    pz = zippo;

    // printf("%p", pz);
    // 000000000061FDF0 000000000061FDF8
    // 000000000061FDF0 000000000061FDF4
    // 000000000061FDF0 000000000061FDF4
    printf("pz = %p, pz + 1 = %p\n\
pz[0] = %p, pz[0] + 1 = %p\n\
*pz = %p, *pz + 1 = %p\n\n",
           pz, pz + 1, pz[0], pz[0] + 1, *pz, *pz + 1);

    // 2 2 2 3 3 
    printf("pz[0][0] = %d\n\
*pz[0] = %d\n\
**pz = %d\n\
pz[2][1] = %d\n\
*(*(pz+2)+1) = %d\n",
           pz[0][0], *pz[0], **pz, pz[2][1], *(*(pz + 2) + 1));

    return 0;
}