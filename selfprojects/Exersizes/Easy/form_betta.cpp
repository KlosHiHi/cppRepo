#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "ru");

	// Задача 2
	int c = 0;
	double z, b, a, betta, y = 0;
	const double pi = 3.1415;
	cout << "Введите количество иксов ";
	cin >> c;
	double* arr = new double[c];
	cout << endl;

	for (int i = 0; i <= c - 1; i++) {
		cout << "Введите значения Z, B, A, Betta для X" << i + 1 << ":\n";
		cout << "Z = ";
		cin >> z;
		cout << "B = ";
		cin >> b;
		cout << "A = ";
		cin >> a;
		cout << "Betta = ";
		cin >> betta;
		cout << endl;
		//betta = betta * (pi / 180.0);
		arr[i] = pow(z, 3) - b + pow(a, 2) / pow(tan(betta), 2);
	}

	for (int i = 0; i <= c - 1; i++) {
		cout << arr[i] << endl;
		arr[i] = round(arr[i] * 100) / 100;
	}

	for (int i = 0; i <= c - 1; i++) {
		y += arr[i];
	}

	cout << "\ny = " << round(y * 100) / 100;
	return 0;
}
