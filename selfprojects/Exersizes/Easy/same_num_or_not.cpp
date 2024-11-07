#include <iostream>
using namespace std;
// Проверить повторяются ли цифры в числе

int main() {
	setlocale(LC_ALL, "ru");
	int numbers;

	cout << "\tПроверка на одинаковость четырёхзначного числа\n\n" << "Введите четырёхзначное число: ";
	cin >> numbers;

	int first = numbers % 10, second = numbers / 10 - ((numbers / 100) * 10), third = numbers / 100 - ((numbers / 1000) * 10), fourth = numbers / 1000;
	cout << "\n|" << first << "|" << second << "|" << third << "|" << fourth << "|";

	if (first == second or first == third or first == fourth or second == third or second == fourth or fourth == third)
		cout << "\n\nЕсть одинаковые числа!" << endl;
	else
		cout << "\n\nНет одинаковых чисел!" << endl;

	return 0;
}