#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//Программа, которая сначала записывает массив в файл, а потом выводит элементы из него.

int main()
{
	int array[10]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	ofstream write("array.txt");
	if (write.is_open()) {
		for (int i = 9; i >= 0; i--)
			write << array[i] << " ";
		write.close();
	}
	
	ifstream read("array.txt");
	if (read.is_open()) {
		string line;
		while (getline(read, line)) {
			for (int i = 0; i < line.length(); i++) {
				if (line[i] == ' ')
					continue;
				cout << line[i] << ' ';
			}
		}
		read.close();
	}
	return 0;
}

