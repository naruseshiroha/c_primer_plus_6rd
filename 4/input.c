// 何时使用&
#include <stdio.h>

/**
 * @brief scanf() 转换说明
 *
 * %c               把输入解释成 字符
 * %d               把输入解释成 有符号的十进制整数
 * %e、%f、%g、%a   把输入解释成 浮点数(C99 新增 %a)
 * %E、%F、%G、%A   把输入解释成 浮点数(C99 新增 %a)
 * %i               把输入解释成 有符号十进制整数
 * %o               把输入解释成 有符号八进制整数
 * %p               把输入解释成 指针(地址)
 * %s               把输入解释成 字符串。从第1个非空白字符开始，到下一个空白字符之前的所有字符都是输入
 * %u               把输入解释成 无符号十进制整数
 * %x、%X           把输入解释成 有符号十六进制整数
 */

/**
 * @brief scanf() 修饰符
 *
 * *            抑制赋值
 *                  %*d
 * 数字         最大字段宽度。输入达到最大字段宽度处，或第1次遇到空白字符时停止
 *                  %10s
 * hh           把整数作为 signed char 或 unsigned char 类型读取
 *                  %hhd、%hhu
 * ll           把整数作为 long long 或 unsigned long long 类型读取
 * h、l或L
 * j            在整型转换说明后面时，表明使用 intmax_t 或 uintmax_t 类型(C99)
 *                  %zd、%zo
 * z            在整型转换说明后面时，表明使用 sizeof 的返回值类型(C99)
 * t            在整型转换说明后面时，表明使用表示两个指针差值的类型(C99)
 *                  %td、%tx
 */

int main(void)
{
    int age;
    float assets;
    char pet[30]; // 字符数组

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f %s", &age, &assets, pet);
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}