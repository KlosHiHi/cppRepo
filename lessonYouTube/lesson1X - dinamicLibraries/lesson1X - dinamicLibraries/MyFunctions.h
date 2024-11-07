#pragma once

#ifdef MYLIBRARY_EXPORT
#define MYLIBRARY_API __declspec(dllexport)

//MYLIBRARY_API используется для того, чтобы экспортировать функции из DLL.
//В случае статической библиотеки этот макрос не нужен.

#else
#define MYLIBRARY_API __declspec(dllimport)
#endif

extern "C" MYLIBRARY_API int add(int a, int b);
extern "C" MYLIBRARY_API int multiply(int a, int b);

//extetn "C" используется для предотвращения "name mangling" 
//(изменение имен функций компилятором), что позволяет функции 
//библиотеки быть вызванными из кода на других языках.