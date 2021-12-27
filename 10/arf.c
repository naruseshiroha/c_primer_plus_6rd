
#include <stdio.h>

#define SIZE 5

void show_array(const double *ar, int size);
void mult_array(double *ar, int size, double mult);

int main(void)
{
    double dip[SIZE] = {1, 2, 3, [1] = 1, [3] = 3, 5};

    printf("The original dip array:\n");
    show_array(dip, SIZE);
    printf("\n");
    mult_array(dip, SIZE, 1.1);
    printf("This dip array after calling mult_array():\n");
    show_array(dip, SIZE);

    return 0;
}

void show_array(const double *ar, int size)
{
    for (int i = 0; i < size; i++)
        printf("%8.3f  ", *(ar + i));
    putchar('\n');
}
void mult_array(double *ar, int size, double mult)
{
    for (int i = 0; i < size; i++)
        *(ar + i) *= (mult * mult);
    // ar[i] = ar[i] * mult * mult;
    // printf("%f\n", *(ar + i));
}