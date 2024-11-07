#include <iostream>
using namespace std;
//Задачка - влезет ли кирпич в отверстие

int main() {
	setlocale(LC_ALL, "Russian");
	int length_Brick = 0, width_Brick = 0, height_Brick = 0;
	int holeHeig = 0, holeLen = 0;

	cout << "Введите длину кирпичика: ";
	cin >> length_Brick;
	cout << "Введите ширину кирпичика: ";
	cin >> width_Brick;
	cout << "Введите высоту кирпичика: ";
	cin >> height_Brick;
	cout << "\nВведите высоту отверстия: ";
	cin >> holeHeig;
	cout << "Введите ширину отверстия: ";
	cin >> holeLen;

	int side1 = length_Brick * width_Brick, side2 = length_Brick * height_Brick, side3 = width_Brick * height_Brick;
	int holeSide = holeHeig * holeLen;

	if (side1 != 0 and side2 != 0 and side3 != 0) {
		if (side1 <= holeSide)
			cout << "\nПравильная сторона кирпичика - 1" << endl;
		else if (side2 <= holeSide)
			cout << "\nПравильная сторона кирпичика - 2" << endl;
		else if (side3 <= holeSide)
			cout << "\nПравильная сторона кирпичика - 3" << endl;
		else
			cout << "\nКирпич не пролезет!" << endl;
	}
}