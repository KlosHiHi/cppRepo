#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	//������� 2 - ������ ��������� � �������������� ������ ��������
	int n = 6, f = 1;

	for (int i = 2; i <= n; i++) {
		f = f * i;
	}
	cout << "\n�����: " << f << endl;
}