
#include <stdio.h>

#define SIZE 10

int sum(int *ar, int n);

int main(void)
{
    int marables[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sum(marables, SIZE);

    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marables is %zd bytes.\n", sizeof marables); // 40
    return 0;
}

int sum(int *ar, int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
        total += *(ar + i);

    // 系统使用 8 字节存储地址
    printf("The size of ar is %zd bytes.\n", sizeof ar); // 8
    return total;
}