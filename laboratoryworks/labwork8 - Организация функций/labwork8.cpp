#include <iostream>
#include <cmath>
using namespace std;

double divide(double, double); //Первая функция

int square(int, int);
unsigned square(unsigned); //Вторые функции

double power(double, unsigned); //Третья функция

double sqVer2(double, unsigned); //Четвёртая функция

int main()
{
	setlocale(LC_ALL, "Russian");

	double x = 5, y = 10;
	cout << "Первый:" << divide(x, y) << endl;

	int a = 3, b = 7;
	unsigned c = 10;
	cout << "Второй: " << square(a, b) << " " << square(c) << endl;

	double num = 2;
	unsigned up = 8;
	cout << "Третий: " << power(num, up) << endl;

	double number = 3;
	unsigned degree = 5;
	cout << "Четвёртый: " << sqVer2(number, degree) << endl;

	return 0;
}

//Первая функция - деление
double divide(double x, double y) {
	if (y == 0)
		return 0;
	return x / y;
}

//Вторая функция 
int square(int a, int b) {
	return a * b;
}
unsigned square(unsigned c) {
	return c * c;
}

//Третья функция 
double power(double num, unsigned up) {
	double s = 1;
	if (up == 0)
		return 1;
	if (up == 1)
		return num;
	for (int i = 0; i < up; i++)
		s = s * num;
	return s;
}

//Четвёртая функция
double sqVer2(double number, unsigned degree) {
	if (degree == 0)
		return 1;
	if (degree == 1)
		return number;
	return number * sqVer2(number, degree - 1);
}
