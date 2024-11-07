#include <iostream>
using namespace std;
//Программа задаёт массив вещественных чисел, а функция счтиает их среднее арифметическое 

float arifmeticMean(float* arr, unsigned short quantity) {
	float sum = 0;
	for (int i = 0; i < quantity; i++) 
		sum += arr[i];
	return round((sum / quantity) * 100) / 100;
}

int main() {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	unsigned short quantity = 0;
	cout << "Введите размер массива: ";
	cin >> quantity;
	float* arr = new float[quantity];

	cout << "\n[";
	for (int i = 0; i < quantity; i++) {
		arr[i] = ((rand() % 100) + (rand() % 100) * 0.01);
		cout << arr[i];
		if ((i + 1) != quantity) cout << ' ';
	}
	cout << "]";

	cout << "\n\nСреднее арифметическое - " << 
		arifmeticMean(arr, quantity) << endl;

	delete[] arr;
	return 0;
}