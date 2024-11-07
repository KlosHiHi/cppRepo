#include <iostream>
using namespace std;
//мини-тест при помощи switch:case
int main() {
	setlocale(LC_ALL, "Rus");

	float grade = 0;
	char var;
	bool injury = 0;

	cout << "\tТест на эрудицию\n\n";
	cout << "1)Один литр это..?\na -> кв. дециметр\nb -> кв. метр\nc -> кв. сантиметр\nОтвет:";
	cin >> var;

	switch (var) {
	case 'a':
		grade += 2;
		break;
	case 'b':
		break;
	case 'c':
		break;
	default:
		break;
	}

	cout << "\n2)В какой стране зарегестрированно 80% пользователей \"Живого журнала\"?\na -> Китай\nb -> Россия\nc -> США\nОтвет:";
	cin >> var;

	switch (var) {
	case 'a':
		break;
	case 'b':
		break;
	case 'c':
		grade += 1;
		break;
	default:
		break;
		return 0;
	}

	cout << "\n3*)В темноте лучше всего видят люди...\na -> с голубыми глазами\nb -> высокого роста\nc -> в очках\nОтвет:";
	cin >> var;

	switch (var) {
	case 'a':
		grade += 1.5;
		break;
	case 'b':
		break;
	case 'c':
		break;
	default:
		break;
		return 0;
	}

	cout << "\nВаш результат - " << grade << endl;

	return 0;
}