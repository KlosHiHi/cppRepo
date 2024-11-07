#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	//Задание 1
	int arr[10]{}, pos, sum = 0, max = arr[0];
	bool fal = false;
	cout << "Введите 10 чисел:" << endl;
	for (int i = 0; i < 10; i++) cin >> arr[i];
	cout << endl;

	//Задание 2
	cout << "Элементы массива ";
	for (int i = 0; i < 10; i++) cout << arr[i] << " ";


	//Задание 3
	cout << "\n\nВведите нужное число ";
	cin >> pos;
	cout << endl;

	for (int i = 0; i < 10; i++) {
		if (pos == arr[i]) {
			cout << "Позиция " << i << endl;
			
		}
	}
	if (fal) cout << "Данного число нет в массиве!" << endl;

	//Задание 4
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
	}
	cout << "\nСумма чисел равна " << sum << endl;

	//Задание 5
	for (int i = 0; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "\nСамое большое число в массиве: " << max << endl;

	return 0;
}

