#include <iostream>
using namespace std;
// Определение номера четверти по 2 координатам (простой вариант).

int main() {
	setlocale(LC_ALL, "ru");
	float x, y;
	
	cout << "Введите X - ";
	cin >> x;
	cout << "Введите Y - ";
	cin >> y;

	if (x == 0 and y == 0)
		cout << "\nНачальная координата!\n";
	else if (x > 0 and y > 0)
		cout << "\nЭто первая четверть!\n";
	else if (x < 0 and y > 0)
		cout << "\nЭто вторая четверть!\n";
	else if (x < 0 and y < 0)
		cout << "\nЭто третья четверть!\n";
	else if (x > 0 and y < 0)
		cout << "\nЭто четвёртая четверть!\n";
}