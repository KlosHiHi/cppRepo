#include <iostream>
using namespace std;
//Программа перевода из десятичной системы в шестнадцатеричную

int main() {
	setlocale(LC_ALL, "Rus");
	int figure;

	cout.unsetf(ios::dec);
	cout.setf(ios::hex); // Выводит шеснацетеричную цифру

	cout << "Введите ваше число: ";
	cin >> figure;
	
	cout << "IШестнадцатеричная форма записи - " << figure << endl;
}