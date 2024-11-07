#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	// Вариант 1 (Власов Вячеслав)

	// Задание 1

	int n, f = 1;
	cout << "Введите число ";
	cin >> n;
	if (n < 0) {
		cout << "Факториала не существет" << endl;
	}
	else {
		for (int i = 2; i <= n; i++) {
			f = i * f;
		}
		cout << "Факториал числа " << n << " равен " << f << endl;
	}


	//Задание 2

	float a, b = 0;
	char q = 'y';
	while (q == 'y') {
		cout << "Введите делимое ";
		cin >> a;
		while (b == 0) {
			cout << "Введите делитель ";
			cin >> b;
			if (b == 0) cout << "Ошибка" << endl;
		}
		cout << "Результат деления " << round((a / b) * 1000) / 1000 << endl;

		cout << "Повторить действие? [y] [n]" << endl;
		cin >> q;
		b = 0;
	}

	
	//Задание 3
	
	cout << "\tУгадайка чисел\n\t(в диапазоне от 0 до 500)\n\n";
	char qw = 'y';

	while (qw == 'y') {
		srand(time(0));
		int a, b = (rand() % 500);

		do {
			cout << "Введите ваше число ";
			cin >> a;
			if (a < b) {
				cout << "Введите большее число." << endl << endl;
			}
			else if (a > b) {
				cout << "Введите меньшее число." << endl << endl;
			}
		} while (a != b);
		
		if (a == b) cout << "Вы угадали число " << b << endl << endl;

		cout << "Хотите повторить? [y] [n]" << endl;
		cin >> qw;
	}
	return 0;
}
