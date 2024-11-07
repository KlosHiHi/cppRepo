#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	//Задание 3 - Cоздать точку останова работающую если f > 30 или i нечётное.
	int n = 6, f = 1;

	for (int i = 2; i <= n; i++) {
		f = f * i;
	}
	cout << "\nОтвет: " << f << endl;
}