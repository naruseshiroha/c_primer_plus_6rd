
#include <stdio.h>

int main(void)
{
    // int arr[2][3] = {1, 2, 3, 4};
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d %d = %d \t", i, j, arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // int urn[3];
    // int *ptr1, *ptr2;

    // ptr1++;
    // // urn++;
    // ptr2 = ptr1 + 2;
    // // ptr2 = ptr1 + ptr2;
    // ptr2 = urn + 1;
    // // ptr2 = urn * ptr1;

    // int *pt;
    // int (*pa)[3];
    // int ar1[2][3];
    // int ar2[3][2];
    // int **p2; // 指向指针的指针

    // pt = &ar1[0][0];
    // printf("%p\n", pt);

    printf("%p \n", (int[2]){1, 2});
    int *pt = (int[2]){1, 2};
    printf("%p \n", pt);

    return 0;
}