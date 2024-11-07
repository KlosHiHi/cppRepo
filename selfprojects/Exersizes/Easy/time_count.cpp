#include <iostream>
using namespace std;

int main()
{
	int time, hours, min1, min2, sec1, sec2;

	cin >> time;
	hours = (time / 3600) % 24;
	min1 = ((time - 3600 * (time / 3600)) / 60) / 10;
	min2 = ((time - 3600 * (time / 3600)) / 60) % 10;
	sec1 = ((time - 3600 * (time / 3600)) % 60) / 10;
	sec2 = ((time - 3600 * (time / 3600)) % 60) % 10;

	cout << hours << ":" << min1 << min2 << ":" << sec1 << sec2;

	return 0;
}
