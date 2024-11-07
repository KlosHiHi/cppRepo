#include <iostream>
using namespace std;

int main() {
	int arr[5]{ 4, 2, 1, 5, 3 }, min, num = 5;

	cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << ' ' << arr[3] << ' ' << arr[4] << endl;

	for (int j = 4; j < 5; j--) {
		for (int i = 0; i < num; i++) {
			min = i;
			if (arr[i] < min) {
				min = arr[i];
				arr[i] = arr[num - 1];
			}
		}
		arr[j] = min;
		num -= 1;
	}
	cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << ' ' << arr[3] << ' ' << arr[4] << endl;
}