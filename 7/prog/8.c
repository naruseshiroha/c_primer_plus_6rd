#include <stdio.h>

#define SALAY1 300
#define SALAY2 450

#define LEVEL1 0.15
#define LEVEL2 0.2
#define LEVEL3 0.25

#define TAXI1 (SALAY1 * LEVEL1)
#define TAXI2 (TAXI1 + ((SALAY2 - SALAY1) * LEVEL2))

int main(void)
{

    return 0;
}