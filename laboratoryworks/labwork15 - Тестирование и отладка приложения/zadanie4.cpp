#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	//Задание 4 - Добавить точки останова, выводящие значения f и i в "Вывод"
	int n = 6, f = 1;

	for (int i = 0; i <= n; i++) {
		if (i == 0) {
			f = 1;
			continue;
		}
		f = f * i;
	}
	cout << "\nОтвет: " << f << endl;
}