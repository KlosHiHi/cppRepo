#pragma once

#ifdef MYDYNAMICLIB_EXPORTS
#define MYDYNAMICLIB_API __declspec(dllexport)
#else
#define MYDYNAMICLIB_API __declspec(dllimport)
#endif

extern "C" MYDYNAMICLIB_API float add(float a, float b);
extern "C" MYDYNAMICLIB_API float subtract(float a, float b);
extern "C" MYDYNAMICLIB_API long long factorial(int n);
extern "C" MYDYNAMICLIB_API int search(char* arr, unsigned size, char sign);