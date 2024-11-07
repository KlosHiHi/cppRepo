#include <iostream>
using namespace std;
//Программа определяет, является ли 5-значное число палиндромом.

int main() {
	setlocale(LC_ALL, "Rus");

	unsigned fivesigned = 00000;
	cout << "Введите пятизначное число: ";
	cin >> fivesigned;
	unsigned short first = fivesigned / 10000, second = ((fivesigned - (fivesigned % 1000)) / 1000) % 10, fourth = (fivesigned % 100) / 10, fifth = fivesigned % 10;

	cout << endl  << first << " " << second << " " << fourth << " " << fifth << endl;

	if (first == fifth and second == fourth)
		cout << "\nДанное число - палиндром." << endl;
	else
		cout << "\nЧисло не является палиндромом :(" << endl;
	return 0;
}