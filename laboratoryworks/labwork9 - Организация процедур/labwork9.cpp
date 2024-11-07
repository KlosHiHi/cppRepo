#include <iostream>
using namespace std;
//Лабораторная работа - Процедуры/Функции

void swap(float&, float&);
void printArr(int arr[], int);
void fill(int numbers[], int);

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0) * 10);

	//Первое задание
	float a = 4, b = 0;
	cout << a << " " << b << endl;
	swap(a, b);

	//Второе задание
	cout << endl;
	int arr[10]{ 2, 4, 6, 1, 3, 5, 7, 8, 9, 0 };
	int size = sizeof(arr) / sizeof(arr[1]);
	printArr(arr, size);

	//Третье задание
	cout << endl;
	int numbers[10]{};
	int dimension = 10;
	fill(numbers, dimension);

	return 0;
}
//Первая процедура, меняет местами 2 числа, при помощи адресов
void swap(float& a, float& b) {
	float storage = a;
	a = b;
	b = storage;
	cout << a << " " << b << endl;

}
//Вторая процедура - выводящая элементы массива через пробел.
void printArr(int arr[], int size) {
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
//Третья процедура - заполняет одномерный массив числами.
void fill(int numbers[], int dimension) {
	for (int i = 0; i < dimension; i++) {
		numbers[i] = 1 + rand() % 10;
		cout << numbers[i] << " ";
	}
	cout << endl;
}