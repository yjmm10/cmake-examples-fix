#ifndef _MYDLL_H //防止头文件重复包含
#define _MYDLL_H

#define ERROR_OPENFILE_FAILED -1 //该dll导出函数调用失败时可能的错误返回代码.
#define ERROR_LOAD_MATRIX -2
#define ERROR_LOAD_IMAGE -3
#define ERROR_UNMATCHED_MATRIX -4
#define ERROR_SUCCESS 1

#ifdef _cplusplus //若是C++，那么就以C语言的方式进行连接
extern "C"
{
#endif
#ifndef MYDLL_EXPORT
#define MYDLL_API _declspec(dllexport) //对该dll而言，这个函数是将要导出的函数，供其他应用程序调用。
#else
#define MYDLL_API _declspec(dllimport) //对调用该dll的应用程序而言，该函数是从dll导入的函数。
#endif
    MYDLL_API int add(int a, int b);
    MYDLL_API int add(int a, int b, int c);
#undef MYDLL_API
#ifdef _cplusplus
}
#endif
#endif