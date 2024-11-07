#include <map>
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	map <int, int > i;
	map <string, string> m;
	map <string, string> d;
	
	i[1] = 3;
	m["Slava"] = "Vlasov";
	d["Roman"] = "Sadovskiy"; // ассоциативные массивы, в которых имя - это номер элемента,  а фамилия - это сам элемент.

	cout << d["Roman"] << endl;
}