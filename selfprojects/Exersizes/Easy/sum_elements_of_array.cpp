#include <iostream>
using namespace std;
//Задача - сумма элементов массива, модуль которых больше 2.5
int main() {
	setlocale(LC_ALL, "ru");

	int size;
	float sum = 0;

	cout << "Длинна массива: ";
	cin >> size;
	float* arr = new float[size];
	
	cout << "Заполните массив (через пробел) - ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
		if (fabs(arr[i]) > 2.5)
			sum += arr[i] * arr[i];
	}

	cout << "Сумма = " << sum << endl;

	return 0;
}