#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	setlocale(LC_ALL, "ru");
	
	/*
	char hello1[]{ "Hello" };
	char hello2[]{ 'H', 'e', 'l', 'l', 'o', '\0'};
	cout << sizeof(hello1) << endl;
	cout << sizeof(hello2) << endl;
	cout << hello1 << endl;
	cout << hello2 << endl;
	*/
	/*
	char str[100] = "Привет ";
	char add[] = "мир";
	strncat_s(str, add, 50);
	cout << "Итоговая строка: " << str << endl;
	*/
	/*
	string hello { "Привет мир" };
	cout << hello.length() << endl;
	cout << hello << endl;
	cout << hello.empty() << endl;
	*/
	/*
	int numbers[] = { 4,3,1 }; //numbers - указаталь, который содержит ссылку на 1 элемент массива
	//int* p = nullptr; 
	int* p = &numbers[1];
	cout << *(p+1) << endl; // = p[2]
	*/
	/*
	int a = 5;
	int *p = &a; // p 
	cout << "Значение а: " << a << endl;
	cout << "Адрес а: " << p << endl;
	cout << "Значение по адресу р: " << *p << endl;

	*p = 10;
	cout << "Новое значение а: " << a << endl;
	*/

	return 0;
}

