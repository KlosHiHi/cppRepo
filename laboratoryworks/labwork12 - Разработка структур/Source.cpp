#include <iostream>

using namespace std;

struct Groceries { //Созданная структура - Задание 1
	string type;
	string name;
	float price;
};

int main() {
	setlocale(LC_ALL, "ru");

	//Groceries grocery[] = { {"drinks", "Coca-Cola", 1.99}, {"drinks", "Water", 0.99}, { "bakaley", "Rise", 1.49 }, { "bakaley", "Mac", 1.79 } }; //- Создание массива Задание 2
	//for (auto& p : grocery) cout << p.type << " - " << p.name << " " << p.price << "$" << endl; //- Вывод массива - Задание 2

	int n;
	string codeWork;
	float min, max;

	cout << "Сколько элементов хотите добавить? ";
	cin >> n;
	Groceries* grocery = new Groceries[n]; //Создание динамического массива

	for (int i = 0; i < n; i++) { //Заполнение массива разными данными - Задание 3
		cout << "Тип продукта: ";
		cin >> grocery[i].type;
		cout << "Наименование продукта: ";
		cin >> grocery[i].name;
		cout << "Цена продукта: ";
		cin >> grocery[i].price;
	}

	cout << "\tПоиск по категориям\n\n" << "Какую категорию найти - ";
	cin >> codeWork;
	for (int i = 0; i < n; i++) { // Поиск по массиву нужной категории - Задание 4
		if (codeWork == grocery[i].type)
			cout << grocery[i].name << endl;
	}

	cout << "\tПоиск по цене\n\n" << "Минимальная цена - ";
	cin >> min;
	cout << "Максимальная цена - ";
	cin >> max;

	for (int i = 0; i < n; i++) {
		if
	}

	delete[] grocery;
	return 0;
}