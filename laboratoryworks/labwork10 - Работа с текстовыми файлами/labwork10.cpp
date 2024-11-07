#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	//Задание 1 и 2
	string name;
	cout << "\tЧтение\n\nВведите имя файла: ";
	cin >> name;
	FILE *file = fopen(name.c_str(), "r");
	if (file != NULL) {
		char letters[100]{"\0"};
		fread(letters, sizeof(letters[1]), 100, file);
		cout << "\nСодержание:\n" << letters << endl << endl;
		fclose(file);
	}
	else
		cout << "\nОшибка! Должно быть такого файла не существует" << endl << endl;

	//Задание 3
	string OUT, IN;
	cout << "\tПерезапись\n\nВведите имя первого файла: ";
	cin >> OUT;
	cout << "Введите имя второго файла: ";
	cin >> IN;
	FILE* out = fopen(OUT.c_str(), "r");
	FILE* in = fopen(IN.c_str(), "a");
	if (out != NULL and in != NULL) {
		char buffer[100]{ "\0" };
		fread(buffer, sizeof(buffer[1]), 100, out);
		fwrite(buffer, sizeof(char), sizeof(buffer), in);
		fclose(out);
		fclose(in);
	}
	else
		cout << endl << "Ошибка! Должно быть файл пустой" << endl;

	return 0;
}