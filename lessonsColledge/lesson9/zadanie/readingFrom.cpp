#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	ofstream os("name.txt");
	if (os.is_open()) {
		os << "¬€чеслав и ћатвей" << endl;
		os.close();
	}
	else {
		cout << "Unable to open file for reading" << endl;
	}

	ifstream is("name.txt");
	string line;

	if (is.is_open()) {
		while (getline(is, line)) 
			cout << line << endl;
		is.close();
	}
	else {
		cout << "Unable to open file for reading" << endl;
	}

	return 0;
}