#include <iostream>
using namespace std;
//Программа получает последовательность чисел, пользователь запрашивает номер определенного числа.

int main() {
	setlocale(LC_ALL, "Rus");
	string numbers;
	int num;

	cout << "Введите последовательность цифр: ";
	cin >> numbers;

	char* arr = new char[numbers.length()];
	for (int i = 0; i < numbers.length(); i++)
		arr[i] = (char)numbers[i];
	
	cout << "\nВведите порядковый номер нужной цифры: ";
	cin >> num;
	cout << "\nВаше число - " << arr[num - 1] << endl;

	delete[] arr;
	return 0;
}