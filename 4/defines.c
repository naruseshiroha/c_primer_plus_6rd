// 使用limit.h和float头文件中定义的明示常量
#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("Some number limits for this systems:\n\
Biggest int: %d\n\
Smallest long long: %lld\n\
One byte = %d bits on this system.\n\
Largest double: %e\n\
Smallest normal float: %e\n\
float precision = %d digits\n\
float epsilon = %e\n",
           INT_MAX, LLONG_MIN, CHAR_BIT, DBL_MAX, FLT_MIN, FLT_DIG, FLT_EPSILON);
    return 0;
}