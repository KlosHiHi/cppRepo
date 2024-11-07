#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	//Задание 2 - Запуск программы с установаленной точкой останова
	int n = 6, f = 1;

	for (int i = 2; i <= n; i++) {
		f = f * i;
	}
	cout << "\nОтвет: " << f << endl;
}