#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int number = 0, a, b;

	std::cout << "\t\tБольшая и меньшая цифра числа\n\n";

	while (number < 10 or number >= 99) {
		std::cout << "Введите двузначное число:  ";
		std::cin >> number;
		if (number < 0 or number > 100)
			std::cout << "Проблема заражения!" << std::endl;
	}

	a = number / 10;
	b = number % 10;

	if (a > b) {
		std::cout << "Большая цифра - " << a << std::endl;
		std::cout << "Меньшая цифра - " << b << std::endl;
	}
	else if (b > a) {
		std::cout << "Большая цифра - " << b << std::endl;
		std::cout << "Меньшая цифра - " << a << std::endl;
	}
	else
		std::cout << "Числа равны" << std::endl;

	return 0;
}

