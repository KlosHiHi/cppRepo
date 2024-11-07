#pragma once

#ifdef MYLIBRARY_EXPORT
#define MYLIBRARY_API __declspec(dllexport)

//MYLIBRARY_API ������������ ��� ����, ����� �������������� ������� �� DLL.
//� ������ ����������� ���������� ���� ������ �� �����.

#else
#define MYLIBRARY_API __declspec(dllimport)
#endif

extern "C" MYLIBRARY_API int add(int a, int b);
extern "C" MYLIBRARY_API int multiply(int a, int b);

//extetn "C" ������������ ��� �������������� "name mangling" 
//(��������� ���� ������� ������������), ��� ��������� ������� 
//���������� ���� ���������� �� ���� �� ������ ������.