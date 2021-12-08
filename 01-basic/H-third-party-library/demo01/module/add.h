#ifndef __ADD_H__
#define __ADD_H__

#if defined(_WIN32)
#if defined(ADD_EXPORT)
#define ADD_API __declspec(dllexport)
#else
#define ADD_API __declspec(dllimport)
#endif
#else
#define ADD_EXPORT
#endif

int ADD_API add(int a, int b);

#endif
