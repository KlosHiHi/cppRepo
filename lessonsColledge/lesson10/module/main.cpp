#include <iostream>
#include "mymodule.h" //подключение файла заголовка

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int a = 5, b = 4;
	cout << add(a, b) << endl;
}