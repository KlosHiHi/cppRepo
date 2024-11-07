#include <iostream>
using namespace std;
//Структура считающая координаты третьей точки по двум
struct dot {
	int x;
	int y;

	dot(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}

	dot operator +(const dot p) const {
		return dot{ x + p.x, y + p.y };
	}
};

int main() {
	setlocale(LC_ALL, "ru");

	dot coordinate1{ -5, 4 };
	
	dot vector = coordinate1 + dot{ 1, 3 };

	cout << "Результат: [" << vector.x << ", " << vector.y << "]\n";

	return 0;
}