#include <iostream>
using namespace std;
//Задачка - Возведение числа в степень (решил сделать функцией, а потом вообще рекурсию добавил)

float exponentiation(float number, int power) {
	if (power == 0)
		return 1;
	if (power == 1)
		return number;
	return number * exponentiation(number, power - 1);
}

int main() {
	setlocale(LC_ALL, "ru");

	double number;
	int power;

	cout << "Введите число: ";
	cin >> number;
	cout << "Введите степень: ";
	cin >> power;

	cout << "Ответ: " << exponentiation(number, power) << endl;

	return 0;
}