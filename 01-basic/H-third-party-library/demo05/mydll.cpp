#include "mydll.h"
// #define MYDLL_EXPORTS //这里定义了MYDLL_EXPORTS 触发myddll.h的条件编译
#define MYDLL_EXPORT

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}