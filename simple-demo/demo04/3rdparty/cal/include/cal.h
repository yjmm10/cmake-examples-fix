#ifndef __CAL_H__
#define __CAL_H__

#if defined(_WIN32)
#if defined(CAL_EXPORT)
#define CAL_API __declspec(dllexport)
#else
#define CAL_API __declspec(dllimport)
#endif
#else
#define CAL_EXPORT
#endif

int CAL_API cal_add(int a, int b);

#endif
