#include <stdio.h>
// 使用 exit(1)
#include <stdlib.h>

int main(void)
{
    int ch;
    FILE *fp;
    char fname[50]; // 存储文件名

    printf("Enter the name of the file: ");
    scanf("%s", fname);

    fp = fopen64(fname, "r"); // 打开待读取文件
    if (fp == NULL)
    {
        printf("Failed to open file. Bye\n");
        exit(1);
    }

    // getc(fp) 从打开的文件中获取一个字符
    while ((ch = getc(fp)) != EOF)
        putchar(ch);

    fclose(fp); // 关闭文件

    return 0;
}