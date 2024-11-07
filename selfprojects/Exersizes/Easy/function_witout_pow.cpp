#include <iostream>
using namespace std;
//¬ычисление функции со степен€ми без использовани€ pow() - вз€л свою готовую рекурсию, которую сделал раньше.

float exponentiation(float number, int power) {
	if (power == 0)
		return 1;
	if (power == 1)
		return number;
	return number * exponentiation(number, power - 1);
}

int main() {
	setlocale(LC_ALL, "ru");
	float x = -1.1, result = 0;
	int m = 1;

	while (x < 0.3) {
		for (m; m < 5; m++) {
			result = round(exponentiation(x, m) * exponentiation(sin(x * m), m) * 1000000) / 1000000;
			cout << "z = " << result << "  при m = " << m << endl;
		}
		cout << "X = " <<x << "\n\n";
		m = 1, x += 0.2;
	}
	return 0;
}