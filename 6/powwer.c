#include <stdio.h>

double power(double n, int p); // ANSI 函数原型

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power \
to which\n");
    printf("the number will be raised. Enter q to quit.\n");

    while (scanf("%lf %d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }

    printf("Hope you enjoyed this powwer trip --bye!\n");

    return 0;
}

double power(double n, int p)
{
    double power = 1;
    int i;
    for (i = 1; i <= p; i++)
    {
        power *= n;
    }

    return power;
}