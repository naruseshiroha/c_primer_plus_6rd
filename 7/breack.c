#include <stdio.h>

int main(void)
{
    float length, width;

    printf("Enter the length of the rectangle:\n");

    while (scanf("%f", &length) == 1)
    {
        printf("Length = %0.2f:\n\
Enter its width:\n",
               length);

        if (scanf("%f", &width) != 1)
            break;

        printf("Width = %0.2f:\n\
Area = %0.2f\n",
               width, length * width);
        printf("Enter the length of the rectangle:\n");
    }

    printf("Done!\n");

    return 0;
}