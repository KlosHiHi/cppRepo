#include <iostream>
#include "mydynamiclib.h"

int main(){
	setlocale(LC_ALL, "ru");

	char arr[12] = { 'h', 'e', 'l', 'l', 'o', ' ', 'f', 'r', 'i', 'e', 'n', 'd' };
	unsigned size = sizeof(arr) / sizeof(arr[1]);

	std::cout << "Сумма - " << add(5, 6) << std::endl;
	std::cout << "Разность - " << subtract(10, 4) << std::endl;
	std::cout << "Факториал - " << factorial(5) << std::endl;
	std::cout << "Индекс символа - " << search(arr, size, 'r') << std::endl;

	return 0;
}
