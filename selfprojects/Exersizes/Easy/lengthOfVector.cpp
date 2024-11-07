#include <iostream>
using namespace std;
//Задача на расчёт длины вектора
int main() {
	setlocale(LC_ALL, "Russian");

	int x, y, z;
	float length;

	cout << "Введите X: ";
	cin >> x;
	cout << "Введите Y: ";
	cin >> y;
	cout << "Введите Z: ";
	cin >> z;

	length = round(sqrt(x * x + y * y + z * z) * 1000) / 1000;

	cout << endl << "Длина вектора (" << x << ";" << y << ";" << z << ") = " << length << endl;


	return 0;
}