#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	//Задание 1 - запись в файл.
	srand(time(0));
	string nameW;
	int n = 0;
	cout << "\tРабота с двоичными файлами\n\n" << "Введите имя файла для записи: ";
	cin >> nameW;

	ofstream write(nameW, ios::binary | ios::out);
	if (write.is_open()) {
		cout << "Какое количество чисел сгенерировать - ";
		cin >> n;
		for (int i = 0; i < n; i++) 
			write << rand() % 101 << " ";
		write.close();
	}
	else
		cout << "Ошибка записи!" << endl;
	
	//Задание 2 - чтение из файла.
	string nameR;
	int number;
	cout << "\nВведите имя файла для чтения: ";
	cin >> nameR;
	ifstream read(nameR, ios::binary | ios::in);
	if (read.is_open()) {
		for (int i = 0; i < n; i++) {
			read.seekg(sizeof(int) * i);
			read.read(reinterpret_cast<char*>(&number), sizeof(number));
			cout << number << " ";
		}
		cout << endl;
		read.close();
	}
	else
		cout << "Ошибка чтения!" << endl;

	//Задание 3 - запись 3 переменных.
	struct Grocery {
		string type;
		string name;
		int cost;
	};
	Grocery groceries[] = { {"drinks", "Water", 0.99}, { "bakaley", "Rise", 1.49 }, { "bakaley", "Mac", 1.79 } };
	string fileWrite;
	cout << "Введите имя файла для записи данных: ";
	cin >> fileWrite;

	ofstream fileW(fileWrite, ios::binary | ios::out);
	if (fileW.is_open()) {
		for (auto& p : groceries)
			fileW << p.type << " " << p.name << " " << p.cost;
		fileW.close();
	}
	else
		cout << "SECURITY ALERT SECURITY ALERT" << endl;

	//Задание 4 - чтение в структуру (не доделано)
	string fileRead, line;
	Grocery gList;
	cout << "Введите имя файла для чтения данных: ";
	cin >> fileRead;

	ifstream fileR(fileRead, ios::binary | ios::in);
	if (fileR.is_open()) {
		while (getline(fileR, line))
			cout << line;
		fileR.close();
	}
	else
		cout << "ОШибка";

	return 0;
}