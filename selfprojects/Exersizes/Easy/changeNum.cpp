#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	// Задача 1
	int a, b, c;
	cout << "Первое число ";
	cin >> a;
	cout << endl << "Второе число ";
	cin >> b;
	cout << endl << "Третье число ";
	cin >> c;

	if (a == b || b == c || a == c) {
		cout << "Изменённое первое число " << a + 5 << endl;
		cout << "Изменённое второе число " << b + 5 << endl;
		cout << "Изменённое третье число " << c + 5 << endl;
	}	
	else 
		cout << endl << "Ошибка" << endl;
	
	return 0;
}

