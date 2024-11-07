#include <iostream>
using namespace std;
//Задание 5 - Написать фукцию, запрашивающую значение факториала. Выполнить отладку с заходом в функцию

int factorial(int n) {
	int f = 1;
	if (n < 0)
		return -1;
	if (n == 0)
		return 1;
	for (int i = 2; i <= n; i++) 
		f = f * i;
	return f;
}

int main() {
	setlocale(LC_ALL, "Rus");
	int n;

	cout << "Введите число факториала: ";
	cin >> n;

	int answer = factorial(n);

	cout << "Ответ: " << answer << endl;
}